#include<stdio.h>
#include<math.h>

void main()

{
	int a,b,c;
	
	printf("a= ");
	scanf("%d",&a);
	
	printf("b= ");
	scanf("%d",&b);
	
	printf("c= ");
	scanf("%d",&c);
	
	if(a==b && b==c && c==a)
	{
		printf("equilateral");
	}
	
	else if(a==b || b==c || c==a)
	{
		printf("isosceles"); 
	}
	
	else if (pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(c,2)+pow(b,2)==pow(a,2))
	{
		printf("right angled triangle");
	}
	
	else if(a!=b && b!=c && c!=a)
	{
		printf("scalene");
	}
}