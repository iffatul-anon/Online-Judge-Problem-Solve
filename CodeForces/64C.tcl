set line [ gets stdin ]
scan $line "%d %d %d" n m k
set k [ expr $k - 1 ]
set x [ expr $k / $n ]
set y [ expr $k % $n ]
puts [ expr $y * $m + $x + 1 ]