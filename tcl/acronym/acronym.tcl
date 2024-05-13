proc abbreviate {phrase} {
    set words [regexp -all -inline {[[:alpha:]][[:alpha:]']*} $phrase]
    set acronym ""
    foreach word $words {
        append acronym [string index $word 0]
    }
    return [string toupper $acronym]
}

