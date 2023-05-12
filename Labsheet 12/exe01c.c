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
 struct Books Book1;
 
 printf("\nEnter Book1 Title:");
 scanf("%s",Book1.title);
 
 printf("\nEnter Book1 Author:");
 scanf("%s",Book1.author);
 
 printf("\nEnter Book1 Subject:");
 scanf("%s",Book1.subject);
 
 printf("\nEnter Book1 ID:");
 scanf("%d",&Book1.book_id);
 
 printf("-----------------------------------\n");
 printf( "\nBook 1 title : %s\n", Book1.title);
 printf( "Book 1 author : %s\n", Book1.author);
 printf( "Book 1 subject : %s\n", Book1.subject);
 printf( "Book 1 book_id : %d\n", Book1.book_id);
 return 0;
}
