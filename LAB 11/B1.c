// Print the Fibonacci Series.
// 1,1,2,3,5,8,13,21,34,.......

#include<stdio.h>
int main(){
    int n;
    printf("enter a term :");
    scanf("%d",&n);
    
    int a=1,i;
    int b,sum;
    sum=a+b;
   
    printf("%d ",a);
    for(i=2;i<=n;i++){
        a=b;
        b=sum;
        sum=a+b;
        printf("%d ",sum);
    }




}
