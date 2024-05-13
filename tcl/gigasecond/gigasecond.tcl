proc addGigasecond {datetime} {
    set timeVal [clock scan $datetime]
    set timeVal [clock add $timeVal 1000000000 seconds]
    clock format $timeVal -format "%Y-%m-%dT%H:%M:%S"
}
