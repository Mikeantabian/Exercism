proc matrixFrom {inputString} {
    set rows [split $inputString "\n"]; #seperates the rows in the string
    set matrix [list]
    foreach row $rows {
        lappend matrix [split $row]
    }
    return $matrix
}    

proc row {matrix n} {
    return [lindex $matrix [expr $n -1]]
}

proc column {matrix n} {
    set column {}
    foreach row $matrix {
        lappend column [lindex $row [expr $n -1]]
    }
    return $column
}
