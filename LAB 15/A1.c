// Copy all elements of one array to another.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter a arry size:");
    scanf("%d",&n);
    int a[n];
    int b[n];

    for(i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&a[i]);
        b[i]=a[i];

    }
    for(i=0;i<n;i++){
        printf("%d",b[i]);
        
    }

}