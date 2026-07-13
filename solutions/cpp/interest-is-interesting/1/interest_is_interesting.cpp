// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    if (balance < 0) {
        return 3.213;
    }
    else if (balance >= 0 and balance < 1000) {
        return 0.5;
    }
    else if (balance >= 1000 and balance < 5000) {
        return 1.621;
    }
    else if (balance >= 5000) {
        return 2.475;
    }
    return 0.0;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    double interest_rate_yearly = interest_rate(balance) * 0.01;
    double interest = interest_rate_yearly * balance;
    return interest;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    double annual_balance_new = balance + yearly_interest(balance);
    return annual_balance_new;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int count = 0;
    double ans = 0.0;
    if (balance >= target_balance) {
        return 0;
    }
    else {
        while (ans < target_balance) {
            if (count == 0) {
                ans = annual_balance_update(balance);
                count += 1;
            }
            else if (count >= 1) {
                ans = annual_balance_update(ans);
                count += 1;
            }
        }
        return count;
    }
    return 0;
}
