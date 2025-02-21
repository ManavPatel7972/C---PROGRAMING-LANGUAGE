/*
 1
 0 1
 0 1 0
 1 0 1 0
 1 0 1 0 1
*/

#include<stdio.h>
void main()
{
    int i,j,count=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(count==0)
            {
                count=1;
            }
            else
            {
                count=0;
            }
            printf("%d ",count);
        }
        printf("\n");
    }
}

