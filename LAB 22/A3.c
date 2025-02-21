//. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind().

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file; //file pointer;
    char ch;

    // 1. Open a file in write mode and demonstrate fprintf()
    file = fopen("A3.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    fprintf(file, "Hello, World!\nThis is a test file.\n");
    printf("Data written using fprintf().\n");
    fclose(file);

    // 2. Open the file in read mode and demonstrate fscanf() and fgetc()
    file = fopen("A3.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Reading with fscanf()
    char word[50];
    printf("\nReading first word using fscanf():\n");
    fscanf(file, "%s", word);
    printf("%s\n", word);

    // Reading with fgetc()
    printf("\nReading character by character using fgetc():\n");
    rewind(file); // Rewind to start of the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Print each character to the console
    }
    fclose(file);

    // 3. Open the file in append mode to demonstrate fputc()
    file = fopen("A3.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("\n\nAppending a single character using fputc().\n");
    fputc('A', file); // Append 'A' to the file
    fclose(file);

    // 4. Demonstrate fseek() and rewind()
    file = fopen("A3.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Move the file pointer to the 15th byte (offset from start)
    fseek(file, 14, SEEK_SET);
    printf("\nReading from 15th byte using fseek():\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Rewind and read the file again
    rewind(file);
    printf("\n\nReading file from the beginning after rewind():\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
