/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345

Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
