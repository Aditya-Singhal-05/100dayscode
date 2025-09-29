/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, k;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDiagonal Traversal of the Matrix:\n");

    // Traverse diagonals starting from first row
    for (k = 0; k < cols; k++) {
        i = 0;
        j = k;
        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from last column
    for (k = 1; k < rows; k++) {
        i = k;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
