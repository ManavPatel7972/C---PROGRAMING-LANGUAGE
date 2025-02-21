//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
int main(){
    int n,i,sum=0,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    int arr[n];
    int max=arr[0];
    int min=arr[0];

    for(i=0;i<n;i++){
        printf("enter a arry elemnts:");
        scanf("%d",&arr[i]);
         sum=sum+arr[i];
        count++;
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        
        
    }

    float avg=(float)sum/count;

    printf("max=%d\nmin=%d\nsum=%d\navg=%f\n",max,min,sum,avg);
}