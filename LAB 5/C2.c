#include<stdio.h>

void main()

{
	int a;
	
	printf("a= ");
	scanf("%d",&a);
	
	if(a & 1)
	{
		printf("a is even number");	
	}
    else
	{
		printf("a is odd number");
	}
}
