/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    // Group 1: 1 star
    printf("*\n\n");

    // Group 2: 3 stars
    for (int i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // Group 3: 5 stars
    for (int i = 1; i <= 5; i++)
        printf("*\n");
    printf("\n");

    // Group 4: 3 stars
    for (int i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // Group 5: 1 star
    printf("*\n");

    return 0;
}
