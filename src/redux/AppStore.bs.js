// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Reductive = require("reductive/src/reductive.js");
var AppState$ReasonreactReductiveBoilerplate = require("./AppState.bs.js");
var Middleware$ReasonreactReductiveBoilerplate = require("./Middleware.bs.js");
var RootReducer$ReasonreactReductiveBoilerplate = require("../reducers/RootReducer.bs.js");

var store = Reductive.Store[/* create */0](RootReducer$ReasonreactReductiveBoilerplate.reducer, AppState$ReasonreactReductiveBoilerplate.initialState(/* () */0), Middleware$ReasonreactReductiveBoilerplate.logger, /* () */0);

exports.store = store;
/* store Not a pure module */
