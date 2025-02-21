#include<stdio.h>

void main()

{
	int a;
	printf("a= ");
	scanf("%d",&a);
	
	int last_digit;

	last_digit=a%10;

	printf("LAST DIGIT OF GIVEN NUMBER %d IS : %d.\n",a,last_digit);

	if(last_digit%2==0)
	{
		printf("a is even number");
	}
	else
	{
		printf("a is odd number");
	}
}

