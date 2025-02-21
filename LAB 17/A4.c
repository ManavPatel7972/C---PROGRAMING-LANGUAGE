#include <stdio.h>

int main(){

    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;
    int temp;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}