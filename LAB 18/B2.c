// Check whether a number is prime, Armstrong or perfect number using functions.

/*#include<stdio.h>
void main()
{
    int number,count=0,i=0,sum,c,arm=0,r=0;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    for(int i=1 ; i<=number ; i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }

    for(i=1 ; i<=number ; i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }

    c = number;

    while(number > 0)
    {
        r=number%10;
        arm = (r * r * r) + arm;
        number/=10;
    }
     
    if(count==2)
    {
        printf("GIVEN NUMBER IS PRIME.");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PRIME.");
    }

    printf("\n");
    
    if(sum==number)
    {
        printf("GIVEN NUMBER IS PERFECT.");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PERFECT.");
    }

    printf("\n");

    if(c == arm)
    {
        printf("GIVEN NUMBER IS ARMSTRONG.......");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT ARMSTRONG.......");
    }
}*/

#include<stdio.h>
void ppa(int n);
void main()
{
    int n;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    ppa(n);
    return 0;
    
}

void ppa(int n)
{   
    int r=0,arm=0,c,i=1,count,sum;
    
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    for(int i=1 ; i<=n ; i++)
    {
        sum=sum+i;
    }

    c=n;

    for(int i=1 ; n>=0 ; i++)
    {
        r = n%10;
        arm+=r*r*r;
        n/=10;
    }

    if(count == 2)
    {
        printf("GIVEN NUMBER IS PRIME.");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PRIME.");
    }

    if(sum == n)
    {
        printf("GIVEN NUMBER IS PERFECT.");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PERFECT.");
    }

    if(c == arm)
    {
        printf("GIVEN NUMBER IS ARMSTRONG.");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT ARMSTRONG.");
    }    
}