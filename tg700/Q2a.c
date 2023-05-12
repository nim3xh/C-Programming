#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	p=fopen("MyData.txt","r"); //open MyData.txt to read
	
	if(p==NULL) //check waether file is available
	{
		printf("This File Doesn't Exist");
		exit(0);
	}
	
	/*char str[100];
	while(fgets(str,100,p)!=NULL) //read file line by line to string and display
	{
		puts(str);
	}*/
	
	char ch;

	while(fscanf(p,"%c",&ch)!=EOF) //read file character by character to string and display
	{
		printf("%c",ch);
	}
	printf("\n");

	fclose(p); //close the file

	return 0;
}
