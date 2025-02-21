#include <stdio.h>

int main()
{
    int i = 10;
    float f = 5.5;
    double d = 10.123;
    char c = 'A';

    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    char *cptr = &c;

    printf("Integer value: %d, Address: %p\n", *iptr, iptr);
    printf("Float value: %.2f, Address: %p\n", *fptr, fptr);
    printf("Double value: %.3f, Address: %p\n", *dptr, dptr);
    printf("Char value: %c, Address: %p\n", *cptr, cptr);

    return 0;
}