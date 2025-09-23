/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Formula: sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    // Output result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
