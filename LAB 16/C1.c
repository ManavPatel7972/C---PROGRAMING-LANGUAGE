// Check a given matrix is a sparse matrix or not.

#include <stdio.h>

int main() {
    int m, n;
    int zeroCount = 0;

    // Input the size of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Input the elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count the number of zero elements in the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // Check if the matrix is sparse
    if (zeroCount > (m * n) / 2) {
        printf("\nThe matrix is a sparse matrix.\n");
    } else {
        printf("\nThe matrix is not a sparse matrix.\n");
    }

    return 0;
}
