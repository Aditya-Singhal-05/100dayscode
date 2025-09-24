/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers: start from (rows - i + 1) to 5
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n"); // move to next line
    }

    return 0;
}
