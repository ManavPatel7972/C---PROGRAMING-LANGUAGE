//Find factorial of the given number
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int i=1;
    int fact=1;
    while(i<=n){
        fact=fact*i;
        i++;

    }
    printf("%d",fact);
}
