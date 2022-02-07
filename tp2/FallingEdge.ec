node FallingEdge
  (val: bool)
returns
  (falling: bool);

let
  falling = (false -> (if ((pre val) < val) then true else false));
tel

