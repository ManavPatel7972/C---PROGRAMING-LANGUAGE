//Replace a character in given string
#include<stdio.h>
void replaceChar(char str[100],char old,char new);
void main(){
    char str[100];
    char old,new;
    printf("enter a string:");
    gets(str);
    printf("enter a old char:");
    scanf("%c",&old);
    printf("enter a new char:");
    scanf("%c",&new);
    replaceChar(str,old,new);
    printf("after a opratino on str :%s\n",str);
}
void replaceChar(char str[100],char old,char new){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==old){
            str[i]=new;
        }
    }
    return;
}