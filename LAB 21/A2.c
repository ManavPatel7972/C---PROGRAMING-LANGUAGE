// Create a structure book with book title, author, publication, and price. Read data of 3 
//books and display.

#include<stdio.h>
#include<string.h>

struct Book{
    char title[100];
    char author[100];
    char publication[100];
    float price;
};

int main(){
    struct Book b[3];
    for(int i=0;i<3;i++){
        printf("enter a book %d details:\n",i+1);
        printf("enter a title:\n");
        scanf("%s",b[i].title);
        printf("enter a author:\n");
        scanf("%s",b[i].author);
        printf("enter a pblucation:\n");
        scanf("%s",b[i].publication);
        printf("enter a pricr:\n");
        scanf("%f",&b[i].price);

    }
    for(int i=0;i<3;i++){
        printf("title=%s\n",b[i].title);
         printf("author=%s\n",b[i].author); 
          printf("publicationt=%s\n",b[i].publication);
           printf("price=%f\n",b[i].price);
          
    }
}