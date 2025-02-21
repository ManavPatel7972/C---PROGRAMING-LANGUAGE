//Check whether the given number is perfect or not

#include <stdio.h>

int main() {
    int n, sum = 0, isPerfect = 0; 
    printf("Enter a number: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    
    if (sum == n) {
        isPerfect = 1;  
    }
    else{
        isPerfect=0;
    }

    
    if (isPerfect==1) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
