oo::class create BankAccount {
    variable money
    variable opened 

    constructor {} {
        set money 0
        set opened false
    }

    method open {} {
        if {$opened == true} {error "account is already open"}
        set opened true
    }

    method close {} {
        if {!$opened} {error "account is not open"}
        set money 0
        set opened false
    }

    method balance {} {
        if {$opened == false} {error "account is not open"}
        return $money
    }

    method deposit {amount} {
        if {!$opened} {error "account is not open"}
        if {$amount < 0} {error "invalid amount"}
        incr money $amount
    }

    method withdraw {amount} {
        if {!$opened} {error "account is not open"}
        if {$amount < 0} {error "invalid amount"}
        if {$amount > $money} {error "insufficient funds"}
        incr money [expr $amount * -1]
    }
}