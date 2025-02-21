//. Calculate without using power function.

#include <stdio.h>

int main() {
    int base, exponent;
    float result = 1;

   
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    
    for (int i = 1; i <= exponent; i++) {
        result *= base; 
    }

   
    printf("%d^%d = %f\n", base, exponent, result);

 
}
