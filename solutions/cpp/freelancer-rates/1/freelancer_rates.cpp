// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <iostream>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    double d_rate = hourly_rate * 8;
    return d_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double fractional_discount = discount * 0.01;
    double d_number = before_discount * fractional_discount;
    double final_discount = before_discount - d_number;
    return final_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double fractional_discount = discount * 0.01;
    double monthly_rate_without_discount = daily_rate(hourly_rate) * 22;
    double monthly_rate_with_discount = monthly_rate_without_discount - (monthly_rate_without_discount * fractional_discount);
    int m_rate = static_cast<int>(std::ceil(monthly_rate_with_discount));
    return m_rate;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double fractional_discount = discount * 0.01;
    double daily_rate_with_discount = daily_rate(hourly_rate) - (daily_rate(hourly_rate)*fractional_discount);
    int days = std::floor(budget / daily_rate_with_discount);
    return days;
}
