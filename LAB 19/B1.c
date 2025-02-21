// Find power of any number using recursion.
#include<stdio.h>
int power(int base,int expo);
    

int main(){
    int base,expo;
    printf("enter a base:");
    scanf("%d",&base);
    printf("enter a expo:");
    scanf("%d",&expo);

    int res=power(base,expo);
    printf("result=%d",res);


}
int power(int base,int expo){
    if(expo==0) return 1;
    else{
         return base*power(base,expo-1);
    }

}