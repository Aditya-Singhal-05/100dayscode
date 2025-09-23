/*Q26: Write a program to print numbers from 1 to n.

Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include <stdio.h>

// Recursive function to print numbers
void printNumbers(int current, int n) {
    if (current > n) {
        return; // base case: stop when current > n
    }
    printf("%d ", current);
    printNumbers(current + 1, n); // recursive call
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    printNumbers(1, n);

    printf("\n");
    return 0;
}
