node multiplexeur1bit
  (a: bool;
  b: bool;
  sel: bool)
returns
  (out: bool);

let
  out = (if sel then a else b);
tel

