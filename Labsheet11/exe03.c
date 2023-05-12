#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[30];
	fp=fopen("ruhuna.txt","w");
	fprintf(fp,"Department of ICT,\nFaculty of Technology,\nUniversity of Ruhuna,\nKaburupitiya,\nMatara,\nSri Lanka.\n");
	fclose(fp);
	fp=fopen("ruhuna.txt","r");
	if(fp==NULL)
	{
		printf("\n Can't Open This File\n");
		exit(1);
	}
	FILE *new;
	new=fopen("out.txt","w");
	while(fgets(str,100,fp)!=NULL)
	{
		fprintf(new,"%s",str);
		puts(str);
	}
	fclose(fp);
	fclose(new);
	return 0;
}
