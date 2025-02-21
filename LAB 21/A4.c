/*
Create structure student with name, percentage and age. Read data of 5 students using 
array of structure.--------------------------
*/

#include<stdio.h>

struct Student{
    char name[100];
    float percentage;
    int age;
};

int main(){
    struct Student s[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter a student %d details:\n",i+1);
        printf("enter a name");
        scanf("%s",s[i].name);
        printf("enter a prcentage");
        scanf("%f",&s[i].percentage);
        printf("enter a age");
        scanf("%d",&s[i].age);


    }
    for(i=0;i<5;i++){
        printf("name=%s\n",s[i].name);
         printf("percentage=%f\n",s[i].percentage); 
          printf("age=%d\n",s[i].age);
        
    }


}