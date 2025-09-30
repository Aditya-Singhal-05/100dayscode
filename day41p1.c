/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    int i, j, n;

    // Input number of strings
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];  // 2D array to store n strings, each up to 99 chars

    // Input strings
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]); // read each string
    }

    // Count characters in each string
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; str[i][j] != '\0'; j++) {
            count++;
        }
        printf("Length of string %d (\"%s\") = %d\n", i + 1, str[i], count);
    }

    return 0;
}
