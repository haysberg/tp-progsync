node obsRE
  (val: bool)
returns
  (test: bool);

var
  V7_tmp: bool;

let
  test = (not (V7_tmp and (pre V7_tmp)));
  V7_tmp = (false -> ((not (pre val)) and val));
tel

