// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // interest changes depending on balance
    if(balance < 0){
        return 3.213;
    } 
    else if(balance>= 0 && balance<1000){
        return 0.5;
    }
    else if(balance>= 1000 && balance < 5000){
        return 1.621;
    }else {
        return 2.475;
    }
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // Return interest amount
    return (interest_rate(balance)/100) * balance;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // Return total balance after interest is added
    return yearly_interest(balance) + balance;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // Finding years required using a while loop that 
    // goes until desired balance is reached
    int year_count = 0;
    while(balance < target_balance){
        balance = annual_balance_update(balance);
        year_count++;
    }
    return year_count;
}