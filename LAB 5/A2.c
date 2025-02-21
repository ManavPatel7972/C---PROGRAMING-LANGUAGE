#include<stdio.h>
void main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    int temp;
    temp=a;
    a=b;
    b=temp;

    // a=a+b;
    // b=a-b;
    // a=a-b;
    printf("%d\n%d",a,b);
}