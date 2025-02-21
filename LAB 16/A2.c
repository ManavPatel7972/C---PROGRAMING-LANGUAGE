//  Count number of positive, negative and zero elements from 3 X 3 matrix.


#include <stdio.h>

int main() {
    int matrix[3][3];  // Declare a 3x3 matrix
    int positive = 0, negative = 0, zero = 0;

    // Input elements for the matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count positive, negative, and zero elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > 0) {
                positive++;
            } else if (matrix[i][j] < 0) {
                negative++;
            } else {
                zero++;
            }
        }
    }

    // Output the results
    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);

    return 0;
}
