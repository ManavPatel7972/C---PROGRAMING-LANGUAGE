
 //Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).


#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    printf("enter a term:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        for(j=i;j<=n;j++){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}

