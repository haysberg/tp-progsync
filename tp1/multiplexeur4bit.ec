node multiplexeur4bit
  (X_0: bool;
  X_1: bool;
  X_2: bool;
  X_3: bool;
  Y_0: bool;
  Y_1: bool;
  Y_2: bool;
  Y_3: bool;
  sel: bool)
returns
  (out_0: bool;
  out_1: bool;
  out_2: bool;
  out_3: bool);

let
  out_0 = (if sel then X_0 else Y_0);
  out_1 = (if sel then X_1 else Y_1);
  out_2 = (if sel then X_2 else Y_2);
  out_3 = (if sel then X_3 else Y_3);
tel

