/**
 * Created by luciano on 11/11/14.
 */
'use strict';

angular.module('LetsGoTeam')
    .controller('TaskController', ['$scope', '$http', '$log', '$timeout',
        function ($scope, $http, $log, $timeout) {

           // $scope.project = myService.getSavedProject();
           // $scope.sprint = myService.getSavedSprint();
           // $scope.stories = myService.getSavedStory()

            // the model that we bind to the input box
            $scope.newTask = {
                description: '',
                number: '',
                assignees: ''
            };

            $scope.successMsgVisible = false;

            // the function to add a story
            $scope.addTask = function(d, n, a) {

                // the payload is simple the json object that we used for binding to the input
                var payload = $scope.newTask;

                $http.post('/api/tasks', payload)
                    .success(function(data, status, header, config) {

                        $log.debug('Success adding a task');

                        // reset the todoModel to not have a description (we keep the last selected user)
                        $scope.newTask.description = '';
                        $scope.newTask.number = '';
                        $scope.newTask.assignees = '';

                        // show a success message
                        $scope.successMsgVisible = true;
                        // let the message dissapear after 2 secs
                        $timeout(function() {$scope.successMsgVisible = false;}, 2000);
                    })
                    .error(function(data, status) {
                        $log.debug('Error while trying to add a task');
                    });
            }

        }
    ]);
/**