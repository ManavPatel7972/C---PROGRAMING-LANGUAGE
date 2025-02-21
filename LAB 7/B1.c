#include<stdio.h>
void main()
{	int a,b,c,max;
	printf("enter three numbers",a,b,c);
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)? (a*c):(b*c);
	printf("%d",max);}