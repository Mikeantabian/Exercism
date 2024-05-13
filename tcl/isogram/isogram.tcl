proc isIsogram {input} {
    set characters_seen [dict create]

    # Convert the word to lowercase
    set lowercase_word [string tolower $input]

    # Remove non-alphabetic characters and convert to lowercase
    set clean_word [string tolower [regsub -all {[^a-z]} $lowercase_word ""]]
    
    # Iterate through each character in the cleaned word
    foreach char [split $clean_word ""] {
        # Check if the character has been seen before
        if {[dict exists $characters_seen $char]} {
            # If the character has been seen, return false
            return 0
        } else {
            # If the character has not been seen, mark it as seen
            dict set characters_seen $char 1
        }
    }
    
    # If no characters are repeated, return true
    return 1
}
