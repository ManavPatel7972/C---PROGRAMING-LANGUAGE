// Create, open and close file.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* ptr;
    char str[100];
    
    ptr=fopen("A1.txt","w");
    if(ptr==NULL){
        printf("error opening file:");

    }
    fprintf(ptr,"\nmy name is manav delvadiya\nhello world\n");
    fclose(ptr);

    ptr=fopen("A1.txt","r");
    if(ptr==NULL){
        printf("error opening file:");
    }

    printf("reading a string from the file:");
    while(fgets(str,sizeof(str),ptr)!=NULL){
        printf("%s",str);


    }
    fclose(ptr);
    printf("flie closed successfully:");
}