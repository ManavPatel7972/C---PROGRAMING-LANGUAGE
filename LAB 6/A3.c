#include<stdio.h>

void main()

{
	char ch;
	
	printf("ch= ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("upper case");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("lower case");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("digit");
	}
	else 
	{
		printf("special character");
	}
}
