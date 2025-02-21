// Count number of elements divisible by 3 in array.

#include<stdio.h>
int main(){
    int n,i;
    printf("enter a arry size:");
    scanf("%d",&n);
    int a[n],count=0;

    for(i=0;i<n;i++){
        printf("enter a arry elemets:");
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            count++;

        }

    }
    printf("count=%d",count);
}