/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check using nested if–else
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else {
        if (number < 0) {
            printf("%d is negative.\n", number);
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
}
