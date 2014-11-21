
define(
    [
        //System includes
        "angular",

        //Custom includes
        "blocks/createproject/createproject",
        "blocks/editproject/editproject",
        "pages/js/restapi"
    ],

    function(angular)
    {
        return angular.module
        (
            "ProjectsModule",
            [
                "RestApiModule",
                "uiRegistrationModule",
                "uiCreateProjectModule",
                "uiEditProjectModule"
            ]
        )

        .controller
        (
            "ProjectsCtr",
            [
                "$scope",
                "$log",
                "restapi",
                "projects",
                "$state",
                function($scope, $log, restapi, projects, $state)
                {
                    $scope.projects = projects;

                    $scope.login = function(form)
                    {
                        $log.info(form);
                        restapi.login(form.email, form.password);
                    };

                    $scope.edit = function (project)
                    {
                        $log.info("EDIT");
                        $log.info(project);
                    };

                    $scope.go = function (project)
                    {
                        $state.go("project", {id:project.id});
                        $log.info("GO");
                        $log.info(project);
                    };
                }
            ]
        )

        .factory
        (
            'ProjectsProvider',
            [
                function()
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return [
                            {
                                "id":"1",
                                "name":"project1",
                                "status":"Active",
                                "description":"project1 descr",
                                "max_points_per_sprint":"12",
                                "number_of_sprints":"3"
                            },
                            {
                                "id":"2",
                                "name":"project2",
                                "status":"Active",
                                "description":"project2 descr",
                                "max_points_per_sprint":"15",
                                "number_of_sprints":"1"
                            },
                            {
                                "id":"3",
                                "name":"project3",
                                "status":"Active",
                                "description":"project3 descr",
                                "max_points_per_sprint":"16",
                                "number_of_sprints":"1"
                            },
                            {
                                "id":"4",
                                "name":"project3",
                                "status":"Complete",
                                "description":"project3 descr",
                                "max_points_per_sprint":"16",
                                "number_of_sprints":"1"
                            },
                            {
                                "id":"5",
                                "name":"project3",
                                "status":"Canceled",
                                "description":"project3 descr",
                                "max_points_per_sprint":"16",
                                "number_of_sprints":"1"
                            }
                        ];
                    };
                    return module;
                }
            ]
        );
    }
);
