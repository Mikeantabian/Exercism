oo::class create Clock {
    variable Min

    constructor {hour minute} {
      set Min [expr { $hour * 60 + $minute }]
    }

    method toString {} {
      set Min [expr { $Min % (24 * 60) }]
      set hour [expr { $Min / 60 }]
      set min [expr { $Min % 60 }]
      format "%02d:%02d" $hour $min
    }

    method add {minutes} {
      incr Min $minutes 
      return [self]
    }

    method subtract {minutes} {
      my add [expr { $minutes * -1 }]
    }

    method equals {other} {
      expr { [my toString] eq [$other toString] }
    }
}

oo::define Clock forward == my equals
oo::define Clock export ==