// Print sum of 1 to n number

#include <stdio.h>

int main() {
    int n, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }

 
    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);

}
