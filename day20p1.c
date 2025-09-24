/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int hasOdd = 0;  // flag to check if odd digits exist

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Extract digits
    while (num != 0) {
        digit = num % 10;          // get last digit
        if (digit % 2 != 0) {      // check if odd
            product *= digit;
            hasOdd = 1;
        }
        num = num / 10;            // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found. Product not defined.\n");

    return 0;
}
