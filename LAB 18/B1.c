/*#include<stdio.h>
void main()
{
    int n,i=0,a=0,b=1,c;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    c = a + b;

    for(i=0 ; n>=c ; i++)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }

}*/
#include<stdio.h>
void fab(int a,int b,int c,int n);
void main()
{
    int n,c,a=0,b=1;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    fab(a,b,c,n);

}

void fab(int a,int b,int c,int n)
{
    int i=0;
    
    c=a+b;

    for(i=0 ; c<=n ; i++)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
}