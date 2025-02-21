//. Count numbers higher than the average of an array.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    int arr[n],sum=0,count=0;

    for(i=0;i<n;i++){
        printf("enter a arry elements:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
        

    }
    float avg=(float)sum/n;

    for(i=0;i<n;i++){
        if(arr[i]>avg){
            count++;
        }
    }
    printf("avg=%f\n",avg);
    printf("Count numbers higher than the average of an array=%d",count);

}