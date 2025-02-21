// Print multiplication table of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("entre a number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }

}