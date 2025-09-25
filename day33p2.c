/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, pos, elem;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for new element

    // Input elements (sorted array)
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &elem);

    // Find position to insert
    pos = n; // default: insert at end
    for (i = 0; i < n; i++) {
        if (elem < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = elem;
    n++; // increase size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
