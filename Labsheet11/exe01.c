#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp; /* file pointer*/
	char fName[20];
	printf("Enter file name to create with extension txt or dat:");
	scanf("%s",fName); /* example “abc.txt” or “abc.dat” */
	/*creating (open) a file, in “w”: write mode*/
	fp=fopen(fName,"w");
	/*check file created or not*/
	if(fp==NULL)
	{
		printf("File does not created!!!");
		return -1; /*exit from program*/
	}
	printf("File created successfully.\n");
	/*LINE A*/
	/*writting into file*/
	putc('A',fp);
	putc('B',fp);
	putc('C',fp);
	printf("\nData written successfully.\n");
	fclose(fp);
	/* LINE B */
	fp=fopen(fName,"r");
	if(fp==NULL)
	{
	printf("\nCan't open file!!!");
	exit(1);
	}
	printf("Contents of file is :\n");
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	printf("%c\n",getc(fp));
	fclose(fp);
	return 0;
}
