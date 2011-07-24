; This alias will solve Problem 1 of Project Euler
; http://projecteuler.net/index.php?section=problems&id=1

alias EU1 {
  ; Set out variables
  var %x 1
  var %sum 0

  ; Check every number under 1000.
  while (%x < 1000) {

    ; If it's a multiple of 3 or 5 add it to the sum.
    if (($calc(%x % 3) == 0) || ($calc(%x % 5) == 0)) %sum = $calc(%sum + %x)

    ; Increase the counter
    inc %x
  }

  ; Print the answer.
  echo -a %sum
}
