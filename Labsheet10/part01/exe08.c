#include<stdio.h>
int main()
{
	int num;
	float f1;
	char ch;
	
	int *numptr;
	float *f1ptr;
	char *chptr;
	
	num=154;
	f1=78.5;
	ch='g';
	
	numptr=&num;
	f1ptr=&f1;
	chptr=&ch;
	
	printf("Value of *numptr : %d\nValue of numptr : %p\nValue of &numptr :%p\n",*numptr,numptr,&numptr);
 	printf("Value of *f1ptr : %f\nValue of f1ptr : %p\nValue of &f1ptr :%p\n",*f1ptr,f1ptr,&f1ptr);
 	printf("Value of *chptr : %c\nValue of chptr : %p\nValue of &chptr :%p\n",*chptr,chptr,&chptr);
 	
 	*chptr++;
 	
 	printf("Value of ch: %c\n",ch);
 	
 	*numptr++;
 	
 	printf("Value of ch: %d\n",num);
 	
 	*f1ptr++;
 	
 	printf("Value of ch: %f\n",f1);
 	return 0;
}
