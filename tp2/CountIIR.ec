node CountIIR
  (init: int;
  incr: int;
  reset: bool)
returns
  (out: int);

let
  out = (init -> (if reset then 0 else ((pre out) + incr)));
tel

