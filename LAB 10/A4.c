// Print digits of given number
#include<stdio.h>
int main(){
    int n,rev=0,digit=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("rev=%d\n",rev);

    while(rev!=0){
        digit=digit*10+rev%10;
        rev=rev/10;

    }
    printf("digit=%d\n",digit);
    
}