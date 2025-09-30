/*Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    int n, i, j;

    // Input number of strings
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100]; // 2D array to store strings

    // Input strings
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    // Print each character of each string
    for (i = 0; i < n; i++) {
        printf("\nCharacters of string %d (\"%s\"):\n", i + 1, str[i]);
        for (j = 0; str[i][j] != '\0'; j++) {
            printf("%c\n", str[i][j]);
        }
    }

    return 0;
}
