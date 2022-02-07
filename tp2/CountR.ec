node CountR
  (inp: bool)
returns
  (out: int);

let
  out = (0 -> (if inp then (1 + (pre out)) else 0));
tel

