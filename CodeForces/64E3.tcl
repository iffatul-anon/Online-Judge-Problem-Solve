set line [gets stdin]
scan $line "%d" n
set a 0
for {set i $n} {$i >= 2} {set i [expr $i-1]} {
  set pr yes
  for {set j 2} {$j * $j <= $i} {incr j} {
    if {$i % $j == 0} {
      set pr no
      break
    }
  }
  if {$pr == "yes"} {
    set a $i
    break
  }
}
set b 0
for {set i $n} {$i <= 20000} {incr i} {
  set pr yes
  for {set j 2} {$j * $j <= $i} {incr j} {
    if {$i % $j == 0} {
      set pr no
      break
    }
  }
  if {$pr == "yes"} {
    set b $i
    break
  }
}
puts "$a $b"
