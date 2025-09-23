/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time, simpleInterest, compoundInterest, amount;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula: (P × R × T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest formula: CI = P * ( (1 + R/100)^T - 1 )
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
