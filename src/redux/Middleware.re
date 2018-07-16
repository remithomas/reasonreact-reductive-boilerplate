/***
 * logs the action before dispatching and the new state after.
 */
let logger = (store, next, action) => {
    Js.log(action);
    let returnValue = next(action);
    Js.log(Reductive.Store.getState(store));
    returnValue
  };
