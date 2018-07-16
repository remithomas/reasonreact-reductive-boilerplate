type appActions =
  | NumberAction(NumberActions.action)
  | StringAction(StringActions.action);

let reducer = (state: AppState.appState, action) =>
  switch action {
  | NumberAction(action) => {...state, counter: NumberReducer.reducer(state.counter, action)}
  | StringAction(action) => {...state, notACounter: StringReducer.reducer(state.notACounter, action)}
  | _ => state
  };
