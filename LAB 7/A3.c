#include<stdio.h>

void main()

{
	int a,b,c;
	char i;
	
	printf("a= ");
	scanf("%d",&a);
	
	printf("i= ");
	scanf(" %c",&i); 
	
	printf("b= ");
	scanf("%d",&b);
	
	switch(i)
	{
		case '+':
			c=a+b;
			printf("%d",c);
			break;
            			
		case '-':
			c=a-b;
			printf("%d",c);
			break;
		case '*':
			c=a*b;
			printf("%d",c);
			break;
		case '/':
			c=a/b;
			printf("%d",c);
			break;
	}


}
