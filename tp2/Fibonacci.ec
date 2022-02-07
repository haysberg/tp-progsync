node Fibonacci
  (reset: bool)
returns
  (integer: int);

let
  integer = (1 -> (if reset then 1 else ((pre integer) + (pre (pre integer)))))
  ;
tel

