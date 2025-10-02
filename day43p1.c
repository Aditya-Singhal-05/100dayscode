/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (j = 0; str[j] != '\0'; j++);
    if (str[j-1] == '\n') {
        str[j-1] = '\0';
        j--;   
    }

    for (i = 0; i < j/2; i++) {
        temp = str[i];
        str[i] = str[j - i - 1];
        str[j - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
