// Convert decimal number to binary. (i.e. n=11  output: 1101

#include<stdio.h>
int main(){
    int n;
    printf("enter a decimal numbre:");
    scanf("%d",&n);

    int reminder,binary=0,place=1;

    while(n>0){
        reminder=n%2;
        binary=binary+reminder*place;
        n=n/2;
        place=place*10;

    }
    printf("binary number=%d",binary);
}
