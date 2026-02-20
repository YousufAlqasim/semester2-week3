
#include <stdio.h>

/*
 * Portfolio submission
 * Name:
 * ID:
 */

int main(void) {
    // Define and initialise variables for the problem data
    float salary = 36250.0;        // Salary in £
    float ni_rate = 8.0;           // NI rate as a percentage (0-10)
    float tax_rate = 15.0;         // Tax rate as a percentage (10-30)

    // Calculate NI contribution
    float ni_contribution = salary * (ni_rate / 100.0);

    // Salary after NI deduction
    float salary_after_ni = salary - ni_contribution;

    // Calculate taxable amount (only the part over £12500)
    float taxable_amount = salary_after_ni - 12500.0;
    if (taxable_amount < 0.0) {
        taxable_amount = 0.0;
    }

    // Calculate tax contribution
    float tax_contribution = taxable_amount * (tax_rate / 100.0);

    // Calculate take-home salary
    float take_home_salary = salary_after_ni - tax_contribution;

    // Print the results
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}