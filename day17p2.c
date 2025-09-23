/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // assume prime initially

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime check
    if (num <= 1) {
        isPrime = 0; // numbers <= 1 are not prime
    } else {
        for (i = 2; i * i <= num; i++) { // check till sqrt(num)
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
