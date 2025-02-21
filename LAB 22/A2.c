// Count chars, spaces, tabs and new lines in a file.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* ptr;
    
    int spaces=0,chars=0,tabs=0,newline=0;
  
    ptr=fopen("A2.txt","r");
    if(ptr==NULL){
        printf("error opening file:");

    }
    while(fgetc(ptr)!=EOF){
        chars++;
        if(fgetc(ptr)==' '){
            spaces++;
        }
        else if(fgetc(ptr)=='\t'){
            tabs++;
        }
        else if(fgetc(ptr)=='\n'){
            newline++;
        }

    }
    fclose(ptr);

    printf("chars=%d",chars);
    printf("tabs=%d",tabs);
    printf("spaces=%d",spaces);
    printf("newline=%d",newline);
    
}
