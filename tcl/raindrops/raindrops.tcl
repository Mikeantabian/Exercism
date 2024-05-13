proc raindrops {number} {
    set result ""
    if {$number % 3 == 0} {
        append result "Pling"
    }
    if {$number % 5 == 0} {
        append result "Plang"
    }
    if {$number % 7 == 0} {
        append result "Plong"
    }
    if {$result eq ""} {
        return $number
    }
    return $result
}
