// Find factorial of a number using function and recursive function
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enetr a number:");
    scanf("%d",&n);
    printf("fact=%d",fact(n));

}
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

