// Pass an array in function to print array elements.
#include<stdio.h>
int passArry(int a[],int x);
int main(){
    int n;
    printf("enetr a number:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&a[i]);
    }
    passArry(a,n);
}
int passArry(int a[],int x){
    for(int i=0;i<x;i++){
        printf("%d",a[i]);

    }
}