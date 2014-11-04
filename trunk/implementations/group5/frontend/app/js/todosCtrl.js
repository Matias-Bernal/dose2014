'use strict';

angular.module('Demo')
  .controller('TodosCtrl', function ($scope, $http, $log, Todos, Users) {

    // we store all data in the data array
    $scope.todos = [];
    // we store all the users
    $scope.users = [];

    $scope.todoModel = {
      description: '',
      user: {}
    }

    // declaration !AND! call (see parenthesis at end of function)
    // of a function that fetches the todos from the server
    var init = function() {
      $scope.todos = Todos.query();
      $scope.users = Users.query();
    }();

    // function to remove a todo with the given id
    $scope.removeTodo = function(todoId) {
      $log.debug("Removing todo " + todoId);

      // find the element in the data array and remove it
      var success = function() {
        for(var i =0; i < $scope.todos.length; i++) {
          if($scope.todos[i].todoId === todoId) {
            $scope.todos.splice(i, 1);
          }
        }
      };

      Todos.delete(todoId, success);
    }


    // Function to add a new todo to the list.
    // Note: we provide the description and the user as parameters as this makes it easier to test
    // the funciton. We could directly access the $scope.todoModel to get the same values.
    // But then our unit-test would have account for that dependency.
    $scope.addTodo = function(todoDescription, user) {
      
      // construct the payload that we will send as part of the post request
      var payload = {
        description: todoDescription,
        userId: user.id
      }

      $log.debug("Sending payload: " + JSON.stringify(payload));

      var success = function(data) {
        // the server should return a json object that represents the new todo item
        // we add the item to the list of todos
        $log.debug('Success adding new todo');
        // add the new todo to our list of todos
        $scope.todos.push(data);
        // reset the todoModel to not have a description (we keep the last selected user)
        $scope.todoModel.description = '';
      };
      Todos.create(payload, success);
    }
  });
