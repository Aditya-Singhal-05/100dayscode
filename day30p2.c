/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main() {
    int n, i;
    int posCount = 0, negCount = 0, zeroCount = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check positive, negative, or zero
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    // Display results
    printf("Total positive numbers = %d\n", posCount);
    printf("Total negative numbers = %d\n", negCount);
    printf("Total zeros = %d\n", zeroCount);

    return 0;
}
