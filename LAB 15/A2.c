// Count total number of negative elements in array.

#include<stdio.h>
int main(){
    int n,i;
    printf("enter a arry size:");
    scanf("%d",&n);
    int a[n],count=0;
    

    for(i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&a[i]);
        if(a[i]<0){
            count++;

        }

    }
    printf("negative count=%d",count);
}