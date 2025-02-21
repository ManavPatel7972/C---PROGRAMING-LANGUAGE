// Check whether the given number is palindrome or not.
// number nu revers karta number j male to is known as palindrome.

#include<stdio.h>
int main(){
    int n,rev=0,orijinal;
    printf("enter a number:");
    scanf("%d",&n);
    orijinal=n;

    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }

    if(rev==orijinal){
        printf("%d is palindrome.\n",n);

    }
    else{
        printf("%d is not a palindrome.\n",n);
    }

}