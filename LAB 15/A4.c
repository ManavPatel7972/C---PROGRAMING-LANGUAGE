//Search element in array.

#include<stdio.h>
int main(){
    int n,flag=0;
    printf("enter a arry size:");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("enter a arry elemets:");
        scanf("%d",&a[i]);

    }
    int x;
    printf("enter a element to be search:");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(a[i]==x){
            flag=1;
            printf("search elemet=%d\n",x);
            break;
        }
        
    }
    if(flag==1)
        printf("element is found:\n");
        else
        printf("element is not found:");
    
}