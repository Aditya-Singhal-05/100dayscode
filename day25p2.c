/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
