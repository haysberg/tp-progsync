node Moyenne
  (input: int)
returns
  (moyenne: int);

var
  V32_min: int;
  V33_max: int;

let
  moyenne = ((V32_min + V33_max) / 2);
  V32_min = (0 -> (if ((pre V32_min) > input) then input else (pre V32_min)));
  V33_max = (0 -> (if ((pre V33_max) < input) then input else (pre V33_max)));
tel

