/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, digit, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate sum of factorial of digits
    while (num > 0) {
        digit = num % 10;            // extract last digit
        sum += factorial(digit);     // add factorial of digit
        num /= 10;                   // remove last digit
    }

    // Check if Strong Number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
