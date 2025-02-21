#include <stdio.h>

int main() {
int num1 = 10, num2 = 20;
int *ptr1 = &num1, *ptr2 = &num2;
int sum = *ptr1 + *ptr2;

printf("Sum of %d and %d is: %d\n", num1, num2, sum);

return 0;
}