// Find the sum and average of different numbers which are accepted by user as many as 
//user wants.

#include<stdio.h>
int main(){
    int n,sum=0,choice,count;
    float avg;

    do{
        printf("enter a number:");
        scanf("%d",&n);
        sum+=n;
        count++;
         
         printf("do you want to anothr number?(1/0):");
         scanf("%d",&choice);
    }while(choice==1);

    avg=(float)sum/count;
    printf("sum=%d\n avg=%f",sum,avg);
    
}