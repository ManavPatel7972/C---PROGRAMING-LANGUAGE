// 1. Create, declare and initialize structure employee.

#include<stdio.h>
#include<string.h>

struct Employee{
    int ID;
    char name[100];
    float salary;

};

int main(){
    struct Employee e[1];
    int i;
    for(i=0;i<5;i++){
        printf("enter a employee %d details:\n",i+1);
        printf("enter a employee Id\n");
        scanf("%d",&e[i].ID);
        printf("enter a employee name\n");
        scanf("%s",e[i].name);
        printf("enter a employee salary\n");
        scanf("%f",&e[i].salary);

    }
    for(i=0;i<5;i++){
        printf("id=%d\n",e[i].ID);
        printf("name=%s\n",e[i].name);
        printf("slalary=%f\n",e[i].salary);

    }
}