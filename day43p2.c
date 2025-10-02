/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (j = 0; str[j] != '\0'; j++);
    if (str[j - 1] == '\n') {  
        str[j - 1] = '\0';   
        j--;
    }

    for (i = 0; i < j / 2; i++) {
        if (str[i] != str[j - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}
