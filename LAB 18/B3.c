#include<stdio.h>
void a(int n,int digit);
void main()
{
    int n,digit;;

    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    a(n,digit);   
}

void a(int n,int digit)
{
    if(n == 0)
    {
        printf("ZERO");
    }

    while(n > 0)
    {
        digit = n % 10;
        n /= 10;

        if(digit == 0)
        {
            printf("ZERO ");
        }

        else if(digit == 1)
        {
            printf("ONE ");
        }
 
        else if(digit == 2)
        {
            printf("TWO ");
        }

        else if(digit == 3)
        {
            printf("THREE ");
        }

        else if(digit == 4)
        {
            printf("FOUR ");
        }

        else if(digit == 5)
        {
            printf("FIVE ");
        }

        else if(digit == 6)
        {
            printf("SIX ");
        }

        else if(digit == 7)
        {
            printf("SEVEN ");
        }

        else if(digit == 8)
        {
            printf("EIGHT ");
        }

        else if(digit == 9)
        {
            printf("NINE ");
        }
    }

}

