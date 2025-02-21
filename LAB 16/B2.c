// Perform Multiplication of two matrices.

#include <stdio.h>

int main() {
    int m, n, p;

    // Input dimensions for the matrices
    printf("Enter the number of rows and columns for first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for second matrix (n x p): ");
    scanf("%d %d", &n, &p);

    int matrix1[m][n], matrix2[n][p], result[m][p];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the result matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the result matrix
    printf("\nResultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
