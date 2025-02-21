//Print all uppercase and lowercase alphabets.
#include<stdio.h>
int main(){
    char ch='A';
    while(ch>='A' && ch<='Z'){
        printf("%c",ch);
        ch++;
    }

    while(ch>='a' && ch<='z'){
        printf("%c",ch);
        ch++;
    }
}