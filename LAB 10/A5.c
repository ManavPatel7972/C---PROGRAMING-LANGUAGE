//Print given number in reverse order.

#include<stdio.h>
int main(){
    int n,rev=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;

    }
    printf("rev=%d",rev);
}
