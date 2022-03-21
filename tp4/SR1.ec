node SR1
  (init: bool;
  S: bool;
  R: bool)
returns
  (Q: bool);

let
  Q = (init -> (if S then true else (if R then false else (pre Q))));
tel

