open StringActions;

let reducer = (_state, action) =>
  switch action {
  | SayHello(name) => name
  };
