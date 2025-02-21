// Calculate without using power function. 
#include<stdio.h>
int main(){
    int base,expo,result=1,i=1;
    printf("enetr a base and expo:");
    scanf("%d %d",&base,&expo);

    while(i<=expo){
        result=result*base;
        i++;

    }
    printf("%d",result);

}