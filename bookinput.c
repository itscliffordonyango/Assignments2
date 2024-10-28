#include <stdio.h>
#include <string.h>

int Defined();
int Inputs();

struct Book {
    char Book_title[30];
    char Author[30];
    int Publication_year;
    char ISBN[13];
    float Price;
};

struct Book book1;

int main() {
    Defined();
    Inputs();
    return 0;  // Return 0 for successful execution
}

int Defined() {
    strcpy(book1.Book_title, "Introduction to C Programming");
    strcpy(book1.Author, "John Smith");
    strcpy(book1.ISBN, "9780131103627");
    book1.Publication_year = 2022;
    book1.Price = 49.99;

    printf("Title: %s \n", book1.Book_title);
    printf("Author: %s \n", book1.Author);
    printf("Year of Publication: %d \n", book1.Publication_year);
    printf("ISBN: %s \n", book1.ISBN);
    printf("Price: %.2f USD \n", book1.Price);

    return 0;
}

int Inputs() {
    printf("Enter the Book Title: \n");
    scanf("%s", book1.Book_title);  // No need for & with char arrays

    printf("Author: \n");
    scanf("%s", book1.Author);  // Correct the typo from Aurhor to Author

    printf("Year of Publication: \n");
    scanf("%d", &book1.Publication_year);  // Use & for int

    printf("ISBN: \n");
    scanf("%s", book1.ISBN);  // No need for & with char arrays

    printf("Price: \n");
    scanf("%f", &book1.Price);  // Use & for float

    printf("\nBook Details:\n");
    printf("Title: %s \n", book1.Book_title);
    printf("Author: %s \n", book1.Author);
    printf("Year of Publication: %d \n", book1.Publication_year);
    printf("ISBN: %s \n", book1.ISBN);
    printf("Price: %.2f USD \n", book1.Price);

    return 0;
}
