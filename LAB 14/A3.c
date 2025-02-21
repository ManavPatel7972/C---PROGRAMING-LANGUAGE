// Count number of even or odd number from an array of n numbers
#include<stdio.h>
int main(){
    int n,i,evencount=0,oddcount=0;
    printf("enter a number:");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }

    }
    printf("even=%d\nodd=%d\n",evencount,oddcount);
    
    
}