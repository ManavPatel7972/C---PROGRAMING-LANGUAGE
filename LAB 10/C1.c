//Check whether the given number is Armstrong or not

#include<stdio.h>
#include<math.h>

int main(){
    int n,rem,result=0,count=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }

    while(n!=0){
        rem=n%10;
        result=result+pow(rem,count);
        n=n/10;
    }
    
    if(result==n){
        printf("%d is a armstrong:",n);

    }
    else{
        printf("%d is not armstrong:",n);

    }


}