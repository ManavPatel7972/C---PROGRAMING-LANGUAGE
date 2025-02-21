//. Find a character from given string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enetr a str :");
    gets(str);
    char ch;
    printf("enetr a charecter:");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("charecter %c is found at position is %d ",ch,i);
        }
        else{
            printf("charecter is not found :");
        }

    }

    

}

/*#include<stdio.h>

void findchar(char s[100],char n)
{   
    for(int i=0 ; s[i]!='0' ; i++)
    {
        if(s[i]==n)
        {   
            printf("CHARACTER FOUNDED %c AT POSITION %d.",n,i);
            return;
        }
    }
}
void findchar(char s[100],char n);
void main()
{
    char s[100],n;
    int f=0,i=0;

    printf("ENTER A STRING : ");
    gets(s);

    printf("ENTER A CHARACTER YOU WONT TO FIND IN STRING S : ");
    scanf("%c",&n);

    findchar(s,n);
}    
*/