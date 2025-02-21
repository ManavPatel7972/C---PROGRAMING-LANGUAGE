//Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!…)

#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a term:");
    scanf("%d",&n);
    float e=1.0;
    float fact=1.0;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            fact*=j;

        }
        e=e+1.0/fact;
    }
    printf("value of e=%f",e);
}
