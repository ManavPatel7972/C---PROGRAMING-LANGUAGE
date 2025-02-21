#include<stdio.h>
void add(int a, int b);
void main()
{
    int a,b,c;
    
    printf("ENTER A = ");
    scanf("%d",&a);
    printf("ENTER B = ");
    scanf("%d",&b);

    
    add(a,b);
    add(a,b);
    add(a,b);
}

void add(int a, int b)
{  
    int c;
    c=a+b;
    printf("%d",c);
}
    