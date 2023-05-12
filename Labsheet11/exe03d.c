#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[100];
	
		
	int characters=0;
	int line=0;
	
	char ch;
	
	fp=fopen("ruhuna.txt","r");
	if(fp==NULL)
	{
		printf("\nUnable to open file\n");
		exit(1);
	}
	
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		characters++;
	}
	fclose(fp);
	fp=fopen("ruhuna.txt","r");
	if(fp==NULL)
	{
		printf("\nUnable to open file\n");
		exit(1);
	}
	
	while(fgets(str,100,fp)!=NULL)
	{
		line++;
	}
	fclose(fp);
	printf("Total Characters = %d\n",characters);
	printf("Total lines = %d\n",line);
	return 0;
}
