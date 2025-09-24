/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
