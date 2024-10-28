#include <stdio.h>
#include <string.h>

int Defined();
int Inputs();

struct Book{
    char Book_title[30];
    char Author [30];
    int Publication_year;
    char ISBN[13];
    float Price ;

    
};
struct Book book1;

int main(){
    // struct Book book1;
    Defined();
    Inputs();

   
}

int Defined(){

    strcpy(book1.Book_title, "Introduction to C Programming");
    strcpy(book1.Author, "John Smith");
    strcpy(book1.ISBN, "9780131103627");
    book1.Publication_year =2022;
    book1.Price = 49.99;

    printf("Title : %s \n",book1.Book_title);
    printf("Author : %s \n", book1.Author);
    printf("Year of Publication : %d \n",book1.Publication_year);
    printf("ISBN : %s  \n",book1.ISBN);
    printf("Price : %0.2f USD \n", book1.Price);
}

int Inputs(){
    printf("Enter the Book Title :  \n");
    scanf("%s",&book1.Book_title);

    printf("Author : \n");
    scanf("%s", &book1.Author);

    printf("Year of Publication : \n");
    scanf("%d", book1.Publication_year);

    printf("ISBN : \n");
    scanf("%s", &book1.ISBN);

    printf("Price : \n");
    scanf("%f", &book1.Price);


    printf("Title : %s \n",book1.Book_title);
    printf("Author : %s \n", book1.Author);
    printf("Year of Publication : %d \n",book1.Publication_year);
    printf("ISBN : %s  \n",book1.ISBN);
    printf("Price : %0.2f USD \n", book1.Price);
}