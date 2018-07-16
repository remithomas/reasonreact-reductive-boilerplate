open NumberActions;

let reducer = (state, action) =>
  switch action {
  | Increment => state + 1
  | Decrement => state - 1
  };
