/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>

int main() {
    int day;

    // Input number
    printf("Enter a number (1-7) representing the day of the week: ");
    scanf("%d", &day);

    // Display day using switch-case
    switch(day) {
        case 1:
            printf("1 -> Sunday\n");
            break;
        case 2:
            printf("2 -> Monday\n");
            break;
        case 3:
            printf("3 -> Tuesday\n");
            break;
        case 4:
            printf("4 -> Wednesday\n");
            break;
        case 5:
            printf("5 -> Thursday\n");
            break;
        case 6:
            printf("6 -> Friday\n");
            break;
        case 7:
            printf("7 -> Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
