#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    int *ptr1 = arr1, *ptr2 = arr2;

    printf("Enter elements of the first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr1 + i));
    }
    
    for (i = 0; i < n; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }

    printf("Elements of the second array (copied from the first array):\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}