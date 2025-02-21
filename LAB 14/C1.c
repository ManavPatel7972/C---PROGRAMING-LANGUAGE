// Count total duplicate elements in an array.
#include<stdio.h>
int main(){
    int n;
    printf("enter a arry size:");
    scanf("%d",&n);
    int arry[n],count=0;

    for(int i=0;i<n;i++){
        printf("enter a arry elemets:");
        scanf("%d",&arry[i]);

    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arry[i]==arry[j]){
                count++;
                  break;
            }
        }
    }
    printf("duplicate elemets =%d",count);
    
}
