/*#include<stdio.h>
void main()
{
    int a,b,tamp;

    printf("ENTERN A NUMBER A : ");
    scanf("%d",&a);

    printf("ENTERN A NUMBER B : ");
    scanf("%d",&b);

    tamp=a;
    a=b;
    b=tamp;

    printf("A = %d\n",a);
    printf("B = %d",b);
}*/

#include<stdio.h>
void swap(float *a,float *b);
void main()
{
    float a,b,c;

    printf("ENTER NUMBER A : ");
    scanf("%f",&a);

    printf("ENTER NUMBER B : ");
    scanf("%f",&b);

    swap(&a,&b);
    // printf("%f\t%f",a,b);
    

}

void swap(float *a,float *b)
{   
    float c;
    c=*a;
    *a=*b;
    *b=c;
    printf("AFTER SWAPPING A : %f",*a);
    printf("\nAFTER SWAPPING B : %f",*b);
}