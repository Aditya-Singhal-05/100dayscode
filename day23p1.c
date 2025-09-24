/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator, denominator;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    denominator = 3; // initial denominator

    for (i = 1; i <= n; i++) {
        numerator = 2 * i;              // numerator pattern
        sum += (float)numerator / denominator;
        denominator += 4;                // update denominator for next term
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
