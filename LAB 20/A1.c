// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[100],rev[100];

//     printf("ENTER STRING S1 : ");
//     gets(s1);

//     printf("GIVEN STRING IS : %s\n",s1);

//     char length = strlen(s1);
//     int i=0;
//     for(i=0 ; i<length ; i++)
//     {
//        rev[i] = s1[length - 1 - i];
//     }
//     rev[length] = '\0';
//     printf("REVERSED STRING S1 : %s\n",rev); 
    
//     int pelidrom=1;

//     for(i=0 ; i<length ; i++)
//     {
//         if(rev[i] != s1[i])
//         {
//             pelidrom=0;
//             break;
//         }   
//     }
    
//     if(pelidrom)
//     {
//         printf("STRING S1 IS PELINDROME.");
//     }
//     else
//     {
//         printf("STRING S1 IS NOT PELINDROME.");
//     }
// }
#include<stdio.h>
#include<string.h>
int pelindrom(char s1[],char rev[],int length);
int main()
{
    char s1[100],rev[100];

    printf("ENTER STRING S1 : ");
    gets(s1);

    int i=0,length;

    length = strlen(s1);

    for(i=0 ; i<length ; i++)
    {
        rev[i] = s1[length - 1 - i];
    }

    rev[length] = '\0';

    printf("REVERSED STRING S1 : %s\n",rev);

    int h = pelindrom(s1,rev,length);

    if(h)
    {
        printf("STRING S1 IS A PELINDROM.");
    }

    else
    {
        printf("STRING S1 IS NOT A PELINDROM.");
    }

    return 0;
}

int pelindrom(char s1[],char rev[],int length)
{
    
    for(int i=0 ; i<length ; i++)
    {
        if(s1[i] != rev[i])
        {
            return 0;
        }

        else
        {
            return 1;
        }
    }
}