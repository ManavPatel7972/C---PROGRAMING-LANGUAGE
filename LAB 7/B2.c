#include<stdio.h>

void main()

{
	char b,c;
	
	printf("c=");
	scanf("%c",&c);
	
	// b=(c>='a' & c<='z')? (printf("alphabet")) : (printf("not_an_alphabet"));
	(c>='a' & c <='z')? (printf("alphabet.")) : (printf("not an alphabet."));
	// printf("%c",b);
	
}
