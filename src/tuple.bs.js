// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Pervasives = require("bs-platform/lib/js/pervasives.js");
var CamlinternalOO = require("bs-platform/lib/js/camlinternalOO.js");

Pervasives.print_float(30.5);

var class_tables = [
  0,
  0,
  0
];

function doSomeOperationsHere(param) {
  if (!class_tables[0]) {
    var $$class = CamlinternalOO.create_table(0);
    var env = CamlinternalOO.new_variable($$class, "");
    var env_init = function (env$1) {
      var self = CamlinternalOO.create_object_opt(0, $$class);
      self[env] = env$1;
      return self;
    };
    CamlinternalOO.init_class($$class);
    class_tables[0] = env_init;
  }
  return Curry._1(class_tables[0], 0);
}

var class_tables$1 = [
  0,
  0,
  0
];

function doSomeMoreOperationsHere(param) {
  if (!class_tables$1[0]) {
    var $$class = CamlinternalOO.create_table(0);
    var env = CamlinternalOO.new_variable($$class, "");
    var env_init = function (env$1) {
      var self = CamlinternalOO.create_object_opt(0, $$class);
      self[env] = env$1;
      return self;
    };
    CamlinternalOO.init_class($$class);
    class_tables$1[0] = env_init;
  }
  return Curry._1(class_tables$1[0], 0);
}

function getCenterCoordinates(param) {
  var x = doSomeOperationsHere(/* () */0);
  var y = doSomeMoreOperationsHere(/* () */0);
  return /* tuple */[
          x,
          y
        ];
}

var ageAndName = /* tuple */[
  24,
  "Lil' Reason"
];

var my3dCoordinates = /* tuple */[
  20.0,
  30.5,
  100.0
];

var y = 30.5;

exports.ageAndName = ageAndName;
exports.my3dCoordinates = my3dCoordinates;
exports.y = y;
exports.doSomeOperationsHere = doSomeOperationsHere;
exports.doSomeMoreOperationsHere = doSomeMoreOperationsHere;
exports.getCenterCoordinates = getCenterCoordinates;
/*  Not a pure module */
