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
 struct Books Book2;
 
 printf("\nEnter Book1 Title:");
 scanf("%s",Book1.title);
 
 printf("\nEnter Book1 Author:");
 scanf("%s",Book1.author);
 
 printf("\nEnter Book1 Subject:");
 scanf("%s",Book1.subject);
 
 printf("\nEnter Book1 ID:");
 scanf("%d",&Book1.book_id);
 
  printf("\nEnter Book2 Title:");
 scanf("%s",Book2.title);
 
 printf("\nEnter Book2 Author:");
 scanf("%s",Book2.author);
 
 printf("\nEnter Book2 Subject:");
 scanf("%s",Book2.subject);
 
 printf("\nEnter Book2 ID:");
 scanf("%d",&Book2.book_id);
 printf("-----------------------------------\n");
 printf( "\nBook 1 title : %s\n", Book1.title);
 printf( "Book 1 author : %s\n", Book1.author);
 printf( "Book 1 subject : %s\n", Book1.subject);
 printf( "Book 1 book_id : %d\n", Book1.book_id);
  printf("-----------------------------------\n");
 printf( "\nBook 2 title : %s\n", Book2.title);
 printf( "Book 2 author : %s\n", Book2.author);
 printf( "Book 2 subject : %s\n", Book2.subject);
 printf( "Book 2 book_id : %d\n", Book2.book_id);
 return 0;
}
