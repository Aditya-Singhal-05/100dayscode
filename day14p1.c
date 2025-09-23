/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Formula-based calculation
    sum = n * n;

    // Output result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
