#include<stdio.h>

void main()

{
	int units;
	float bill,totalbill;
	
	printf("units= ");
	scanf("%d",&units);
	
	if(units<=50)
	{
		bill=units*0.50;
	
	}
	else if(units>=50 && units<=150)
	{
		bill=50*0.5+(units-50)*0.75;
		
	}
	else if(units>=150 && units<=250)
	{
		bill=50*0.5+100*0.75+(units-150)*1.20;

	}
	else
	{
		bill=50*0.5+100*0.75+150*1.2+(units-250)*1.5;
		
	}
	
	totalbill=(bill*0.20)+bill;
	printf("%f",totalbill);
}