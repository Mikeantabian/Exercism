proc luhn {digits} {

    # Remove spaces from the input
    set cleaned_number [regsub -all {\s} $digits ""]
    
    # Check if the length of the cleaned number is 1 or less
    if {[string length $cleaned_number] <= 1} {
        return 0
    }

    # Check if the input contains any non-digit characters
    if {[regexp {[^0-9]} $cleaned_number]} {
        return 0
    }

    # Reverse the cleaned number
    set reversed_number [string reverse $cleaned_number]
    
    set sum 0
    set double_digit 0

    #iterate through each digit in the reversed number
    foreach digit [split $reversed_number ""] {
        # Convert the digit to an integer
        set value [expr {$digit}]

        #double every single digit
        if {$double_digit} {
            set value [expr {$value * 2}]
            # If doubling results in a number greater than 9, subtract 9
            if {$value > 9} {
                set value [expr {$value - 9}]
            }
        }

        # Add the digit to the sum
        incr sum $value

        # Toggle double_digit for next iteration
        set double_digit [expr {!$double_digit}]
    }

    # Check if the sum is divisible by 10
    if {$sum % 10 == 0} {
        return 1
    } else {
        return 0
    }
    
}

