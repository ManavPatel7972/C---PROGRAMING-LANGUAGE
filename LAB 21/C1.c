// Add two distances in feet and inches using structure.

#include<stdio.h>
#include<string.h>

typedef struct distance{
  int feet;
  int inche;

}distance;

void main(){
  distance d1,d2,d3;
  printf("enter a distance 1 ditals:\n");
  printf("enter a feet");
  scanf("%d",&d1.feet);
  printf("enter a inche:");
  scanf("%d",&d1.inche);

  printf("\nenter a distance 2 ditals:\n");
  printf("enter a feet");
  scanf("%d",&d2.feet);
  printf("enter a inche:");
  scanf("%d",&d2.inche);

  d3.feet=d1.feet+d2.feet;
  d3.inche=d1.inche+d2.inche;

  // 1 inche=12 feet;

  



 

}
