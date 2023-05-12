#include<stdio.h>

struct Docinfo{
 int docNo;
 char docName[20];
 double charge;
 }doc[3];
 

 void store()
 {
 for(int i=0;i<3;i++)
 {
 
   printf("\n----------------------------------\n");
 
   printf("Enter Document Number:");
   scanf("%d",&doc[i].docNo);
 	
   printf("Enter Document Name:");
   scanf("%s",doc[i].docName);
 	
   printf("Enter Charge:");
   scanf("%lf",&doc[i].charge);
  }
 }
 
 void display()
 {
 for(int i=0;i<3;i++)
  {
   printf("\n----------------------------------\n");
   printf("Document Number: %d\n",doc[i].docNo);
   printf("Document Name: %s\n",doc[i].docName);
   printf("Document charge: %.2lf\n",doc[i].charge);
  }
 }
 
 int main()
 {
 store();
 display();
 return 0;
 }
