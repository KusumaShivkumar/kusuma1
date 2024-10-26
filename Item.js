var app = angular.module('ItemApp', [])
app.controller('ItemCtrl', function($scope) {
$scope.items = ['Item 1', 'Item 2', 'Item 3']; // default items
$scope.addItem = function() {
$scope.items.push($scope.newItem);
};
$scope.removeItem = function(index) {
$scope.items.splice(index, 1);
};
});