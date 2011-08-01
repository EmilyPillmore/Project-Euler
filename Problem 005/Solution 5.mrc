; Problem 5: http://projecteuler.net/index.php?section=problems&id=5
; Please note that while this will solve the problem, mIRC will become
; unresponsive for awhile during the calculations.

alias EU5 {
  ; Set the vars
  var %x 0
  var %y 1
  var %check 0

  ; Loop until we break it
  while (1) {

    ; Only check numbers ending in 0, since to be divisible by 10 or 20 it must
    ; end in 0
    inc %x 10
    echo -a Checking: %x

    ; Check if it's divisible by every number, 1-20
    while (%y <= 20) {
      if ($calc(%x % %y) == 0) inc %check
      inc %y
    }

    ; if it is break out of the loop
    if (%check == 20) break
    else %check = 0, %y = 1
  }

  ; Display the answer.
  echo -a Answer: %x
}

