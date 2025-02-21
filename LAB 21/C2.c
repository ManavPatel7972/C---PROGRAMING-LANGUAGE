// Add two times hh, mm and ss using structure.
#include<stdio.h>

typedef struct Time{
    int hh;
    int mm;
    int ss;
}Time;

int main(){
    Time t1,t2,t3;
    printf("enter a time t1 details:\n");
    printf("enter a hour:");
    scanf("%d",&t1.hh);
    printf("enter a minite:");
    scanf("%d",&t1.mm);
    printf("enter a second:");
    scanf("%d",&t1.ss);

    printf("\n\nenter a time t2 details:\n");
    printf("enter a hour:");
    scanf("%d",&t2.hh);
    printf("enter a minite:");
    scanf("%d",&t2.mm);
    printf("enter a second:");
    scanf("%d",&t2.ss);

    t3.hh=t1.hh+t2.hh;
    t3.mm=t1.mm+t2.mm;
    t3.ss=t1.ss+t2.ss;
    
    if(t3.ss>=60){
        t3.mm=t3.mm+1;
        t3.ss=t3.ss-60;
    }



    if(t3.mm>=60){
        t3.hh=t3.hh+1;
        t3.mm=t3.mm-60;
    }

    printf("%2d:%2d:%2d",t3.hh,t3.mm,t3.ss);

 
}

