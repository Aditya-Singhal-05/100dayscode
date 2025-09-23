/*Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

// Recursive function to calculate product of even numbers
long long productEven(int n) {
    if (n <= 1)   // base case: no even numbers ≤ 1
        return 1;
    if (n % 2 != 0)  // if n is odd, skip it
        return productEven(n - 1);

    return n * productEven(n - 2);  // multiply n with next smaller even
}

int main() {
    int n;
    long long product;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    product = productEven(n);

    if (n < 2)
        printf("No even numbers in the range 1 to %d. Product = 1\n", n);
    else
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
