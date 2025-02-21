// Print the upper triangular matrix.

#include <stdio.h>

int main() {
    int n;

    // Input the size of the matrix (for a square matrix)
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the upper triangular matrix
    printf("\nUpper Triangular Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print only the elements on or above the main diagonal
            if (i <= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");  // Print 0 for elements below the main diagonal
            }
        }
        printf("\n");
    }

    return 0;
}
