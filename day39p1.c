/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, k, flag = 1;

    // Input matrix size
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for (i = 0; i < rows && i < cols; i++) {
        for (k = i + 1; k < rows && k < cols; k++) {
            if (A[i][i] == A[k][k]) {
                flag = 0; // Duplicate found
                break;
            }
        }
        if (flag == 0) break;
    }

    // Print result
    if (flag == 1)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
