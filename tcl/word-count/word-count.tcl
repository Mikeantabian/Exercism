proc countWords {sentence} {
    # Step 1: Initialize Variables
    set counts [dict create]

    # Step 2: Tokenize the Sentence
    #set words [split $sentence {[:space:][:punct:]}]
    set words [regexp -all -inline {\w+'\w+|\w+|\d+} $sentence]

    # Step 3: Normalize Words
    foreach word $words {
        set word [string tolower $word]

        # Step 4: Count Word Occurrences
        if {[dict exists $counts $word]} {
            # Increment count if word exists
            dict incr counts $word
        } else {
            # Initialize count to 1 if word doesn't exist
            dict set counts $word 1
        }
    }

    # Step 5: Return the Result
    return $counts
}
