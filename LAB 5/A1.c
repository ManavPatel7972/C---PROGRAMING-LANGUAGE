//  Print given feet into inches. (inches = feet*12)
#include<stdio.h>
void main()
{
    int feet,inches;

    printf("ENTER INCHES : ");
    scanf("%d",&inches);

    feet = 12 * inches;

    printf("%d",feet);
}