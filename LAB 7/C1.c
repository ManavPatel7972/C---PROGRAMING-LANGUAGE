
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1==num2)
	 {
        printf("equal.\n");
     }
    else
	{
        printf("not equal.\n");
    }
}