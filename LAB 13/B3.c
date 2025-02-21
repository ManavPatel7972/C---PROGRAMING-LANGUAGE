/*
 1
 A B
 1 2 3
 C D E F
 1 2 3 4 5
*/

#include<stdio.h>
int main(){
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",ch);
                ch++;
            }
            else{
                printf("%d ",j);
            }
           


        }
        printf("\n");
    }
}