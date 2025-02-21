#include<stdio.h>

void main()
{
	int i=1,n,oddcount=0,evencount=0;
	

	
	while(i<=10)
	{
		printf("Enter number = ");
		scanf("%d",&n);

		i++;	
		
		if(n%2==0)
		{
			evencount++;
		}
		else if(n%2!=0)
		{
			oddcount++;	
		}
		
	}
	printf("%d\n",oddcount);
	printf("%d",evencount);

}
