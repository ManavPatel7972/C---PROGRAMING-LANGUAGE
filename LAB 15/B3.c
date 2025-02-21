// Swap first element with last, second to second last and so on.

#include <stdio.h>

int main() {
    int n;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    // Reverse the array in-place
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];  // Swap arr[i] and arr[j]
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
