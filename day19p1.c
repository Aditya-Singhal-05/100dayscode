/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

// Function to find HCF (GCD) using Euclidean algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = hcf(num1, num2);  // find HCF
    lcm = (num1 * num2) / gcd;  // formula for LCM

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
