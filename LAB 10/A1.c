// Find out sum of rst and last digit of a given number.
#include<stdio.h>

int main(){
    int n;
    printf("enter a digit:");
    scanf("%d",&n);

    int fd,ld;
    ld=n%10;

    while(n>10){
        n=n/10;

    }    
    fd=n;
    int sum=fd+ld;
    printf("sum=%d",sum);
}