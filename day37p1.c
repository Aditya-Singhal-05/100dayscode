/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows][1]; // store sum of each row in a 2D array with 1 column

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (i = 0; i < rows; i++) {
        rowSum[i][0] = 0; // initialize sum for this row
        for (j = 0; j < cols; j++) {
            rowSum[i][0] += matrix[i][j];
        }
    }

    // Print original matrix
    printf("\nMatrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print row sums
    printf("\nRow sums stored in 2D array:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i][0]);
    }

    return 0;
}
