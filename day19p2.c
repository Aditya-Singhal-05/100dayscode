/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;     // extract last digit
        sum += remainder;         // add to sum
        num = num / 10;           // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
