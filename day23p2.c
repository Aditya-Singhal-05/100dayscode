/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5, cols = 5;

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
