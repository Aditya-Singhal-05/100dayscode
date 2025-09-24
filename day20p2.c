/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    long long binary, onesComplement = 0, place = 1;
    int digit;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;

    // Process each digit
    while (temp != 0) {
        digit = temp % 10;  // extract last digit
        if (digit == 0)
            onesComplement += 1 * place;  // flip 0 -> 1
        else if (digit == 1)
            onesComplement += 0 * place;  // flip 1 -> 0
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
        temp /= 10;   // remove last digit
        place *= 10;  // shift place value
    }

    printf("1's Complement of %lld = %lld\n", binary, onesComplement);

    return 0;
}
