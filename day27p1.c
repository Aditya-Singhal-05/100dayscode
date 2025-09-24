/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // peak row has 9 stars (2*rows-1)

    // Upper part of pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2*i - 1; j++) { // stars in odd numbers
            printf("*");
        }
        printf("\n");
    }

    // Lower part of pattern
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
