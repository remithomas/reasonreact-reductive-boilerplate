let store =
  Reductive.Store.create(
    ~reducer=RootReducer.reducer,
    ~preloadedState=AppState.initialState(),
    ~enhancer=Middleware.logger,
    ()
  );
