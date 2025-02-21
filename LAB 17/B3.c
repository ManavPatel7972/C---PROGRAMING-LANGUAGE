#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];
    int(*ptr1)[cols] = mat1, (*ptr2)[cols] = mat2, (*ptrSum)[cols] = sum;

    
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", (*(ptr1 + i) + j));
        }
    }

   
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", (*(ptr2 + i) + j));
        }
    } 
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            *(*(ptrSum + i) + j) = *(*(ptr1 + i) + j) + *(*(ptr2 + i) + j);
        }
    }

    
    printf("Sum of the two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", *(*(ptrSum + i) + j));
        }
        printf("\n");
    }

    return 0;
}