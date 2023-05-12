#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	p=fopen("MyData.txt","a+"); //open MyData.txt in append mode
	
	if(p==NULL) //check waether file is available
	{
		printf("This File Doesn't Exist");
		exit(0);
	}
	
	fprintf(p,"\nRobert Frost was an American poet.\nHe wrote beatiful poems.\n\"Mending Wall\" was a famous poem of him.");	

	fclose(p); //close the file

	return 0;
}
