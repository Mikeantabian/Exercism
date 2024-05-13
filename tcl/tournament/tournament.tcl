proc tournamentResults {filename} {
    set teams {}
    
    # Helper procedure to initialize teams
    proc initializeTeam {team} {
        if {![info exists teams($team)]} {
            set teams($team) [list 0 0 0 0 0] ;# MP W D L P
        }
    }
    
    # Helper procedure to update team scores
    proc updateScores {team result} {
        dict with teams $team {
            lassign $teams($team) MP W D L P
            incr MP
            switch $result {
                win {incr W; incr P 3}
                loss {incr L}
                draw {incr D; incr P}
            }
            set teams($team) [list $MP $W $D $L $P]
        }
    }
    
    # Read input file and update scores
    set fileId [open $filename r]
    while {[gets $fileId line] != -1} {
        # Extract match details
        if {[regexp {^(.+?);(.+?);(.+)$} $line -> team1 team2 result]} {
            foreach t [list $team1 $team2] {
                initializeTeam $t
            }
            updateScores $team1 $result
            switch $result {
                win {updateScores $team2 loss}
                loss {updateScores $team2 win}
                draw {updateScores $team2 draw}
            }
        }
    }
    close $fileId

    # Format the results
    set fmt "%-31s| %2s | %2s | %2s | %2s | %2s"
    set header [format $fmt Team MP W D L P]
    set result ""

    dict for {team info} $teams {
        lappend result [format $fmt $team {*}$info]
    }

    # Sort teams by points (P) and then by name alphabetically
    set sorted_teams [lsort -decreasing -command {a b} {
        set p_diff [expr {[lindex $b 4] - [lindex $a 4]}]
        expr {$p_diff == 0 ? [string compare [lindex $a 0] [lindex $b 0]] : $p_diff}
    } [dict map {k v} $teams {linsert $v 0 $k}]]

    set final_results [concat [list $header] $result]
    foreach team_info $sorted_teams {
        lappend final_results [format $fmt {*}$team_info]
    }
    return [join $final_results \n]
}
