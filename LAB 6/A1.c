#include<stdio.h>
void main()
{
    int n1,n2,n3;

    printf("ENTER NUMBER 1 : ");
    scanf("%d",&n1);

    printf("ENTER NUMBER 2 : ");
    scanf("%d",&n2);

    printf("ENTER 1 FOR ADDITION.\n ENTER 2 FOR SUBSTRACTION.\n ENTER 3 FOR MULTIPLACATION.\n ENTER 4 FOR DIVISION.\n ");
    scanf("%d",&n3);

    if(n3==1)
        printf("%d",n1+n2);

    if(n3==2)
        printf("%d",n1-n2);

    if(n3==3)
        printf("%d",n1*n2);

    if(n3==4)
        printf("%d",n1/n2);
}