// Read and store the roll no and marks of 20 students using 2D array.

#include<stdio.h>
int main(){
    int row=10,cols=2;
    int a[row][cols];

    printf("enter a roll no. and marks:");
    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);

        }
        
    }
 
    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            printf("%d",a[i][j]);

        }
        printf("\n");
        
    }
    
    

}