/*#include<stdio.h>
void main()
{
    float a,b,c;

    printf("ENTER A NUMBER A : ");
    scanf("%f",&a);
    printf("ENTER A NUMBER B : ");
    scanf("%f",&b);
    printf("ENTER A NUMBER C : ");
    scanf("%f",&c);

    if(a>b)
    {   
        if(a>c)
        {
            printf("A IS MAXIMUM.");
        }
    }
    else if(b>c)
    {
        printf("B IS MAXIMUM.");
    }
    else
    {
        printf("C IS MAXIMUM.");
    }
}*/

#include<stdio.h>
void max(float a,float b,float c);
void main()
{
    float a,b,c;
    
    printf("ENTER A NUMBER A : ");
    scanf("%f",&a);
    printf("ENTER A NUMBER B : ");
    scanf("%f",&b);
    printf("ENTER A NUMBER C : ");
    scanf("%f",&c);

    max(a,b,c);
}

void max(float a,float b,float c)
{   
    if(a>b)
    {
        if(a>c)
        {
            printf("A IS MAXIMUM.");
        }
    }

    else if(b>c)
    {
        printf("B IS MAXIMUM.");
    }
    
    else
    {
        printf("C IS MAXIMUM.");
    }
}