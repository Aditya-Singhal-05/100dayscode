/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, target;
    int found = 0;  // flag: 0 = not found, 1 = found

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is found at position %d (0-based index).\n", target, i);
    } else {
        printf("%d is not found in the array.\n", target);
    }

    return 0;
}
