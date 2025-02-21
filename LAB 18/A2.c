#include<stdio.h>
void max(int a, int b);
void main()
{
    int a,b,c;
    
    printf("ENTER A = ");
    scanf("%d",&a);
    printf("ENTER B = ");
    scanf("%d",&b);

    max(a,b);
}
    void max(int a, int b)
    {  
        int c;
        if(a>b)
        {
            printf("A IS MAX.");
        }
        else
        {
            printf("B IS MAX.");
        }
    }
    