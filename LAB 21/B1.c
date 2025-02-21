//1. Demonstrate structure pointer.
#include<stdio.h>
#include<string.h>
 typedef struct Student{
    char name[100];
    int roll;
    int age;
}student;

int main(){
    student s1;
 strcpy(s1.name,"manav");
 s1.roll=285;
 s1.age=18;
 
 printf("%s\n",s1.name);
 printf("%d\n",s1.roll);
 printf("%d\n\n",s1.age);

 student* pt=&s1;

 //printf("%p\n",s1.name);
 //printf("%p\n",&s1.roll);
 //printf("%p\n",&s1.age);

 strcpy(pt->name,"patel");
 pt->roll=300;
 pt->age=19;

 printf("%s\n",s1.name);
 printf("%d\n",s1.roll);
 printf("%d\n",s1.age);
 
 }