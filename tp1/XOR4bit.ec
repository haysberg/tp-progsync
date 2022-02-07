node XOR4bit
  (X_0: bool;
  X_1: bool;
  X_2: bool;
  X_3: bool;
  Y_0: bool;
  Y_1: bool;
  Y_2: bool;
  Y_3: bool)
returns
  (out_0: bool;
  out_1: bool;
  out_2: bool;
  out_3: bool);

let
  out_0 = (X_0 xor Y_0);
  out_1 = (X_1 xor Y_1);
  out_2 = (X_2 xor Y_2);
  out_3 = (X_3 xor Y_3);
tel

