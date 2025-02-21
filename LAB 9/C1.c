// Convert given number in words. (i.e. n=3456  output: Three Four Five Six)
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero\n");
       
    }

    while (num > 0) {
        int digit = num % 10;  
        num = num / 10;        
        
      
        switch(digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            default: break; 
        }
    }

    printf("\n");

    return 0;
}
