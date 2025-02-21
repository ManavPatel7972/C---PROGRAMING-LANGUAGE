//input a string in character array and print string and length of string.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string:");
    gets(str);
    
    int i,length=0;
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    for(i=0;str[i] !='\0';i++){
        printf("%c",str[i]);
    }
    printf("\nlength of string=%d",length);
}