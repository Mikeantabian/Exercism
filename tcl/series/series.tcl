proc slices {series length} {
    # Check for edge cases
    if {[string length $series] == 0} {
        error "series cannot be empty"
    }
    if {$length > [string length $series]} {
        error "slice length cannot be greater than series length"
    }
    if {$length <= 0} {
        error "slice length cannot be less than one"
    }

    set result {}
    set series_length [expr {[string length $series] - $length + 1}]  
    for {set i 0} {$i < $series_length} {incr i} {
        lappend result [string range $series $i [expr {$i + $length - 1}]]
    }
    return $result
    
}
