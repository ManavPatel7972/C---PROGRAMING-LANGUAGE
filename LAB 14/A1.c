 // Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&arr[i]);

    }
    printf("print arry in normal order: ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    printf("\nprint arry in revers order:");
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }


}

