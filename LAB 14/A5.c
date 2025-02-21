// Read ve person height and weight and count the number of person having height 
//greater than 170 and weight less than 50.

#include<stdio.h>
int main(){
    float height[5];
    float weight[5];
    int i,count=0;

    for(i=0;i<5;i++){
        printf("enter a height of person:");
        scanf("%f",&height[i]);
        printf("enter a weight of person:");
        scanf("%f",&weight[i]);

        if(height[i]>170 && weight[i]<50){
            count++;
        }
    }
    printf("number of person than height is greter than 170 and weight is less than 50=%d ",count);
    

}
