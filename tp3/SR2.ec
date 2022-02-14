node SR2
  (init: bool;
  S: bool;
  R: bool)
returns
  (Q: bool);

let
  Q = (init -> (if R then false else (if S then true else (pre Q))));
tel

