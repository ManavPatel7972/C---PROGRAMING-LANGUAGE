//Sort elements of an array in an ascending order.
#include<stdio.h>
int main(){
    int n;
    printf("enter a arry size:");
    scanf("%d",&n);
    int arry[n];

    for(int i=0;i<n;i++){
        printf("enter a arry elemets:");
        scanf("%d",&arry[i]);

    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arry[j]>arry[j+1]){
                int temp;
                temp=arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=temp;

            }
        }
    }
    printf("after a shorted arry\n");
    for(int i=0;i<n;i++){
        printf("%d,",arry[i]);

    }
}