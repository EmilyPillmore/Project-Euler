-- There's an easier way of doing this using summations of n(n + 1)/2
-- but this way is in the vein of the others.

euler_1 = sum [ x | x <- [1..1000], x `mod` 3 == 0 || x `mod` 5 == 0 ]

