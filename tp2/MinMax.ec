node MinMax
  (input: int)
returns
  (min: int;
  max: int);

let
  min = (0 -> (if ((pre min) > input) then input else (pre min)));
  max = (0 -> (if ((pre max) < input) then input else (pre max)));
tel

