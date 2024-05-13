#TWO DIFFERENT METHODS, BOTH WORK

proc hammingDistance {left right} {
    # Check if the lengths of the strings are equal
    if {[string length $left] != [string length $right]} {
        error "strands must be of equal length"
    }

    # Initialize the count of differences
    set count 0
    set length [string length $left]

    # Iterate over the characters of both strings simultaneously
    for {set i 0} {$i < $length} {incr i} {
        # Compare characters at corresponding positions
        if {[string index $left $i] ne [string index $right $i]} {
            # Increment the count if the characters are different
            incr count
        }
    }

    # Return the count of differences
    return $count
}


# proc hammingDistance {left right} {
#     # Check if the lengths of the strings are equal
#     if {[string length $left] != [string length $right]} {
#         error "strands must be of equal length"
#     }

#     # Initialize the count of differences
#     set count 0

#     # Split the strings into lists of characters
#     set chars_left [split $left ""]
#     set chars_right [split $right ""]

#     # Iterate over the characters and compare them
#     foreach char_left $chars_left char_right $chars_right {
#         if {$char_left ne $char_right} {
#             # Increment the count if the characters are different
#             incr count
#         }
#     }

#     # Return the count of differences
#     return $count
# }
