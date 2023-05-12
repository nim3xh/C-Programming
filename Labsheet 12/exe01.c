#include <stdio.h>
#include <string.h>

struct Books {
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
};
int main() {
 /* Declare Book1 of type Book */
 struct Books Book1={"How to C program","Deitel", "Programming Basic",6589508};
 /* Book 1 specification 
 strcpy( Book1.title, "C Programming");
 strcpy( Book1.author, "Nuha Ali");
 strcpy( Book1.subject, "C Programming Tutorial");
 Book1.book_id = 6495407;
 /* print Book1 info */
 printf( "Book 1 title : %s\n", Book1.title);
 printf( "Book 1 author : %s\n", Book1.author);
 printf( "Book 1 subject : %s\n", Book1.subject);
 printf( "Book 1 book_id : %d\n", Book1.book_id);
 return 0;
}
