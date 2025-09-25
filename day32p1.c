/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array size
    n3 = n1 + n2;
    int merged[n3];

    // Copy elements of arr1 into merged
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of arr2 into merged
    for (j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
