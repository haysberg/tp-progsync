node RisingEdge
  (val: bool)
returns
  (rising: bool);

let
  rising = (false -> (if ((pre val) > val) then true else false));
tel

