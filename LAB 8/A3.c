#include<stdio.h>

void main()

{
	int i=1,num1=1,num2=1;
	
	printf("Enter a numbers num1= ");
	scanf("%d",&num1);
	
	printf("Enter a numbers num2= ");
	scanf("%d",&num2);
	
	while(i>=num1 && i<=num2)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
		
	}
}
