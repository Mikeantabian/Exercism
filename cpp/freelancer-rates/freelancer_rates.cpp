// INFO: Headers from the standard library should be inserted at the top via
//#include <iostream>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // 8 hours in a daily work load
    return 8 * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // Discounted rate
    return before_discount * (1-(discount/100));
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // Call apply_discount() function to get discounted rate, then multiply by 8 for a day, and by 22 for a month 
    return ceil(apply_discount(hourly_rate,discount) * 8 * 22);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // Find discounted rate using apply_discount()
    // Divide budget by 8 and discounted rate
    return floor(budget/(8 * apply_discount(hourly_rate,discount)));
}