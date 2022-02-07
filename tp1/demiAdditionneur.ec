node demiAdditionneur
  (a: bool;
  b: bool)
returns
  (cy: bool;
  sum: bool);

let
  cy = (if (a and b) then true else false);
  sum = (a xor b);
tel

