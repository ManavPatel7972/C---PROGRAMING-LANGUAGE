// #include<stdio.h>
// #include<math.h>

// void main()

// {
// 	int a,b,c;
// 	float r1,D,r2;
	
// 	printf("a= ");
// 	scanf("%d",&a);
	
// 	printf("b= ");
// 	scanf("%d",&b);
	
// 	printf("c= ");
// 	scanf("%d",&c);
	
// 	printf("r1= ");
// 	scanf("%f",&r1);
	
// 	printf("r2= ");
// 	scanf("%f",&r2);

// 	D=b*b-(4*a*c);
// 	printf("%f",D);
	
	
// 	if(D>0)
// 	{
// 		r1=(-b+sqrt(D))/2*a;
// 		r2=(-b-sqrt(D))/2*a;
// 		printf("%f",r1);
// 		printf("%f",r2);
// 	}
// }
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } 
	
	else if (discriminant == 0) 
	{
        // One real root
        root1 = root2 = -b / (2 * a);
        printf("Root: %.2f\n", root1);
    } 
	
	else 
    {	// Two complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1: %.2f + %.2f\n", realPart, imagPart);
        printf("Root 2: %.2f - %.2f\n", realPart, imagPart);
    }

    return 0;
}
