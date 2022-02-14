node obseqsr
  (init: bool;
  S: bool;
  R: bool)
returns
  (O: bool);

var
  V42_Q: bool;
  V51_Q: bool;

let
  O = (V42_Q = V51_Q);
  V42_Q = (init -> (if S then true else (if R then false else (pre V42_Q))));
  V51_Q = (init -> (if R then false else (if S then true else (pre V51_Q))));
tel

