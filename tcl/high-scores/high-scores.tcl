#! tclsh

oo::class create HighScores {
    variable scores

    constructor {} {
        # Initialize an empty list to store scores
        set scores [list]
    }

    method addScores {args} {
        # Store the scores in the instance variable
        lappend scores {*}$args
    }

    method scores {} {
        # Return the stored scores
        return $scores
    }

    method latest {} {
        # Return the latest score (the last one added)
        if {[llength $scores] > 0} {
            return [lindex $scores end]
        } else {
            return {}
        }
    }
    
    method personalBest {} {
        # Return the highest score
        if {[llength $scores] > 0} {
            return [lindex [lsort -integer -decreasing $scores] 0]
        } else {
            return {}
        }
    }

    method topThree {} {
        # Return the top three scores
        set sortedScores [lsort -integer -decreasing $scores]
        if {[llength $sortedScores] >= 3} {
            return [lrange $sortedScores 0 2]
        } else {
            return $sortedScores
        }
    }
}
