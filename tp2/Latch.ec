node Latch
  (on: bool;
  off: bool)
returns
  (running: bool);

let
  running = (false -> (if off then false else (if on then true else (pre 
  running))));
tel

