#include<stdio.h>.

void main()

{
	int a,b,c,d,e,total,percentage;
	
	printf("a= ");
	scanf("%d",&a);
	
	printf("b= ");
	scanf("%d",&b);
	
	printf("c= ");
	scanf("%d",&c);
	
	printf("d= ");
	scanf("%d",&d);
	
	printf("e= ");
	scanf("%d",&e);
	
	total=a+b+c+d+e;
	
	percentage=total*100/500;
	
	if(percentage<35)
	{
		printf("fail");
	}
	
	else if(percentage>=36 && percentage<=45)
	{
		printf("pass class");
	}
	else if(percentage>=46 && percentage<=60)
	{
		printf("second class");
	}
	else if(percentage>=61 && percentage<=70)
	{
		printf("first class");
	}
	else if(percentage>=70)
	{
		printf("distinction");
	}

	
}
