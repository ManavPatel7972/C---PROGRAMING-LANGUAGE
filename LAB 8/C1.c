#include<stdio.h>

void main()
{
	int sum=0,num=0,count=0,i=1,square;
	float avg;
	
	while(count<10)
	{
		
		square=i*i;
		if(square%10==9)
		{
			sum+=square;
			count++;
		}
		i++;
		
	}
	avg=sum/count;
	
	
	printf("%d\n",sum);
	printf("%f",avg);
}



