/*Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and 
strupr()*/
#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[100];
printf("enetr a str1:");
gets(str1);
printf("enetr a str2:");
gets(str2);

printf("length of str1=%d\n",strlen(str1));
printf("length of str2=%d\n",strlen(str2));
if(strcmp(str1,str2)==0){
    printf("both str are same:");
}
else{
    printf("both str are diifrent:\n");
}
strcpy(str1,str2);
printf("after copy str1 is=%s\n",str1);
strcat(str1,str2);
printf("after cat str1 is=%s\n",str1);
printf("after str1 reverse=%s\n",strrev(str1));
printf("after str2 reverse=%s\n",strrev(str2));
printf("after str1 is lwr is=%s\n",strlwr(str1));
printf("after str2 is lwr is=%s\n",strlwr(str2));
printf("after str1 is upr is=%s\n",strupr(str1));
printf("after str2 is upr is=%s\n",strupr(str2));


}