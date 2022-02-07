node Count
  (inp: bool)
returns
  (out: int);

let
  out = (0 -> ((pre out) + (if inp then 1 else 0)));
tel

