//. Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
int main(){
    int n,i,pc=0,nc=0;
    printf("enter a number:");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            pc++;
        }
        else{
            nc++;
        }

    }
    printf("positive=%d\nnegative=%d\n",pc,nc);
    
}