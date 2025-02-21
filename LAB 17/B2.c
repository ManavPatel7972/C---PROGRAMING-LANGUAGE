#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], temp;
    int *ptr1 = arr1, *ptr2 = arr2;

    printf("Enter elements of the first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr1 + i));
    }

    printf("Enter elements of the second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr2 + i));
    }

    
    for (i = 0; i < n; i++)
    {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }

    printf("After swapping, elements of the first array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr1 + i));
    }

    printf("\nAfter swapping, elements of the second array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}