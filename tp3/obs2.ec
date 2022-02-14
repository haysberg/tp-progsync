node obs2
  (a: bool;
  b: bool;
  c: bool)
returns
  (o: bool);

let
  o = (a or (b and c));
tel

