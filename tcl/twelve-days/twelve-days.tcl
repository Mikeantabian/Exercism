proc verse {n} {
    set days [list "first" "second" "third" "fourth" "fifth" "sixth" "seventh" "eighth" "ninth" "tenth" "eleventh" "twelfth"]
    set gifts {
        "a Partridge in a Pear Tree"
        "two Turtle Doves, and "
        "three French Hens, "
        "four Calling Birds, "
        "five Gold Rings, "
        "six Geese-a-Laying, "
        "seven Swans-a-Swimming, "
        "eight Maids-a-Milking, "
        "nine Ladies Dancing, "
        "ten Lords-a-Leaping, "
        "eleven Pipers Piping, "
        "twelve Drummers Drumming, "
    }
    
    set verse "On the [lindex $days [expr {$n - 1}]] day of Christmas my true love gave to me: [lindex $gifts [expr {$n - 1}]]"
    if {$n > 1} {
        #append verse "\n"
        for {set i [expr {$n - 1}]} {$i > 0} {incr i -1} {
            append verse "[lindex $gifts [expr {$i - 1}]]"
        }
    }
    append verse "."
    return $verse
}

proc sing {from to} {
    set song ""
    for {set i $from} {$i <= $to} {incr i} {
        append song [verse $i]
        if {$i != $to} {
            append song "\n"
        }
    }
    return $song
}
