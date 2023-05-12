#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	p=fopen("MyData.txt","r"); //open MyData.txt to read to read and count lines
	
	if(p==NULL) //check waether file is available
	{
		printf("This File Doesn't Exist");
		exit(0);
	}
	
	char str[100];
	int line=0;

	while(fgets(str,100,p)!=NULL) //to read file line by line to string and count
	{
		line++; //line counter
	}
	
	fclose(p); //close the file

	int cha=0;
	char ch;

	p=fopen("MyData.txt","r"); //open MyData.txt agian to read and count characters
	
	while(fscanf(p,"%c",&ch)!=EOF)
	{
		cha++; //character counter
	}

	FILE *new;

	new=fopen("results.txt","w"); //open new file for output
	fprintf(new,"Number of lines = %d\n",line); //print number of lines
	fprintf(new,"Number of characters = %d\n",cha); //print number of lines
	fclose(new); //close output file

	fclose(p); //close the file

	return 0;
}
