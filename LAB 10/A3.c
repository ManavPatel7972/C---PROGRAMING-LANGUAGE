// Find whether the given number is prime or not

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int isprime=1;
    if(n<=1){
        isprime=0;
    }
    else{
        
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
            else{
                isprime=1;
            }
        }
    }
    if(isprime==1){
        printf("%d is prime number:",n);
    }
    else{
        printf("%d is not prime number:",n);

    }
}