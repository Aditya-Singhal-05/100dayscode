/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

// Recursive function to print binary representation
void toBinary(int n) {
    if (n == 0)
        return;
    toBinary(n / 2);          // recursive call
    printf("%d", n % 2);      // print remainder (binary digit)
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        toBinary(num);
        printf("\n");
    }

    return 0;
}
