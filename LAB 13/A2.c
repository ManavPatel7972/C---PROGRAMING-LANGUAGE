/*
12345
1234
123
12
1
*/

#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=1;j<=5-i;j++){
            printf("%d",j);

        }
        printf("\n");
    }
}