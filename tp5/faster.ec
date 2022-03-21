node faster
  (a: bool;
  b: bool)
returns
  (faster: bool;
  cpt: int);

let
  faster = (true -> (if (a = b) then (pre faster) else (not (((cpt = 0) and b) 
  and (not a)))));
  cpt = (0 -> (if (b and (not a)) then ((pre cpt) - 1) else ((pre cpt) + 1)));
tel

