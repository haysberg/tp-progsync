node obsadd
  (a: bool;
  b: bool;
  c: bool)
returns
  (O: bool);

var
  V68_c1: bool;
  V69_r1: bool;
  V70_c2: bool;
  V71_r2: bool;
  V148_r0: bool;
  V149_s0: bool;
  V150_r1: bool;

let
  O = ((V68_c1 = V70_c2) and (V69_r1 = V71_r2));
  V68_c1 = ((a xor b) xor c);
  V69_r1 = (((b and c) or (b and a)) or (a and c));
  V70_c2 = (V149_s0 xor c);
  V71_r2 = (V150_r1 xor V148_r0);
  V148_r0 = (a and b);
  V149_s0 = (a xor b);
  V150_r1 = (V149_s0 and c);
tel

