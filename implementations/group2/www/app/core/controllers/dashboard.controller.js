'use strict';

angular.module('coffee.core').controller('DashboardController', ['$scope', '$stateParams', '$location', '$modal', 'Global', 'Projects', 'Users', 'Requirements', 'Tasks', 'Sprints',
    function($scope, $stateParams, $location, $modal, Global, Projects, Users, Requirements, Tasks, Sprints) {

        $scope.global = Global;

        $scope.init = function() {
            var id = $stateParams.projectId;
            Projects.one(id).get().then(function(project) {
                $scope.project = project;
                project.one('current_sprint').get().then(function(res) {
                    $scope.sprint = res;
                }, function err(res) {
                    $scope.sprint = null;
                    $scope.err = res.data.Message;
                });

                project.one('current_sprint').get().then(function(sprint) {
                    console.log('current_sprint', sprint);

                    Sprints.one(sprint.id).getList('tasks').then(function(tasks) {


                        $scope.dashboard = {
                            todo: [],
                            in_progress: [],
                            done: []
                        };
                       angular.forEach(tasks, function(task) {
                            task.user = $scope.loadUser(task.user_id);
                            pushTask(task);
                        });
                    });


                })

/*

                //TODO: just reqs of current sprint!
                project.getList('reqs').then(function(reqs){
                    $scope.project.reqs = reqs;
                    $scope.dashboard = {};

                    angular.forEach(reqs, function(req) {
                        $scope.dashboard[req.id] = {
                            todo: [],
                            in_progress: [],
                            done: [],
                            title: req.title,
                            id: req.id,
                        };             

                        Requirements.one(req.id).getList('tasks').then(function(tasks) {
                            angular.forEach(tasks, function(task) {
                                task.user = $scope.loadUser(task.user_id);
                                pushTask(task);
                            });
                        });
                    });
                });
*/
            });
        };


        $scope.loadUser = function(id) {
            return Users.one(id).get().$object
        };


        $scope.assignToMe = function(task) {
            task.user_id = $scope.global.user.id;
            task.user = $scope.global.user;
            task.put().then(function(res) {
                console.log(res);
            }, function err(msg) {
                alert(msg);
            }); 
        };

        $scope.openAssign = function (project, task) {

            var modalInstance = $modal.open({
                templateUrl: '/app/core/views/projects/assign_modal.html',
                controller: 'AssignController',
                size: 'sm',
                resolve: {
                    task: function () {
                        return task;
                    },
                    project: function () {
                        return project;
                    }
                }
            });

            modalInstance.result.then(function (selected_user) {
                task.user_id = selected_user.id;
                task.user = selected_user;                
                task.put().then(function(res) {
                    console.log(res);
                }, function err(msg) {
                    alert(msg);
                });                
            }, function () {
                console.log('Modal dismissed at: ' + new Date());
            });
        };

        $scope.openLog = function (project, task) {

            var modalInstance = $modal.open({
                templateUrl: '/app/core/views/projects/log_modal.html',
                controller: 'LogController',
                size: 'sm',
                resolve: {
                    task: function () {
                        return task;
                    },
                    project: function () {
                        return project;
                    }
                }
            });

            modalInstance.result.then(function (hours) {
                task.hours_spent = hours;
                task.put().then(function(res) {
                    console.log(res);
                }, function err(msg) {
                    alert(msg);
                });                
            }, function () {
                console.log('Modal dismissed at: ' + new Date());
            });
        };


        $scope.removeTask = function(list, task) {
            var index = indexOfTask(list, task.id);
            if (index > -1) {
                task.remove();
                $scope.dashboard.todo.splice(index, 1);
            }            
        };

        ////////////////////////////////////////////////////
        //    Drag & Drop functions
        ////////////////////////////////////////////////////


        $scope.onDropToDo = function(data,evt){
            var index = indexOfTask($scope.dashboard.todo, data.id);
            if (index == -1) {
                $scope.dashboard.todo.push(data);
                updateTask(data, 'New');
            }
        };

        $scope.onDragToDo = function(data,evt){
            var index = indexOfTask($scope.dashboard.todo, data.id);
            if (index > -1) {
                $scope.dashboard.todo.splice(index, 1);
            }
        };

        $scope.onDragInProgress = function(data,evt){
            var index = indexOfTask($scope.dashboard.in_progress, data.id);
            if (index > -1) {
                $scope.dashboard.in_progress.splice(index, 1);
            }
        };

        $scope.onDropInProgress = function(data,evt){
            var index = indexOfTask($scope.dashboard.in_progress, data.id);
            if (index == -1) {
                $scope.dashboard.in_progress.push(data);
                updateTask(data, 'In progress');            
            }
        }

        $scope.onDragDone = function(data,evt){
            var index = indexOfTask($scope.dashboard.done, data.id);
            if (index > -1) {
                $scope.dashboard.done.splice(index, 1);
            }
        };

        $scope.onDropDone = function(data,evt){
            var index = indexOfTask($scope.dashboard.done, data.id);
            if (index == -1) {
                $scope.dashboard.done.push(data);
                updateTask(data, 'Completed');                 
            }
        };



        ////////////////////////////////////////////////////
        //    Utils functions
        ////////////////////////////////////////////////////

        function indexOfTask(list, id) {
            for (var i = list.length - 1; i >= 0; i--) {
                if(list[i].id == id)
                 return i;
            };
            return -1;
        }

        function pushTask(task) {
            var select = {
                'New': function() { 
                    $scope.dashboard.todo.push(task); 
                },       
                'In progress': function() { 
                    $scope.dashboard.in_progress.push(task); 
                },                
                'Completed': function() { 
                    $scope.dashboard.done.push(task); 
                }      
            };
        
            if(select[task.progress]) 
                select[task.progress]();
            else
                console.log('unknown progress', task);
        }

        function updateTask(task, progress) {
            task.progress = progress;

            Requirements
            .one(task.requirement_id)
            .one('tasks', task.id)
            .customPUT(task).then(function(res) {
            });


        }

    }
]);