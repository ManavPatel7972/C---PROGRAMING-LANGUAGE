//Print all ASCII character with their values

#include <stdio.h>

int main() {
    printf("ASCII Character Table:\n");
    printf("Character\tASCII Value\n");
    printf("-------------------------\n");

    for (int i = 0; i < 128; i++) {
        printf("    %c\t\t   %d\n", i, i);
    }

   
}
