; Solves http://projecteuler.net/problem=2

Alias EU2 {
  ; Set the variables
  var %x 1
  var %y 1
  var %last 1
  var %sum 0

  ; Check every number under 4 milion
  while (%x < 4000000) {

    ; If it's a multiple of 2, add it to the sum.
    if ($calc(%x % 2) == 0) %sum = $calc(%sum + %x)
    ; set %last to %x, %x to %x+%y and %y to %last.
    %last = %x
    %x = %x + %y
    %y = %last

  }

  ; Print the sum.
  echo -a %sum
}

