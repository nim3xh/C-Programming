#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("digit.txt","w");
	for(int i=10;i<=20;i++)
	{
		fprintf(fp,"%d ",i);
	}
	fclose(fp);
	
	fp=fopen("digit.txt","r");
	if(fp==NULL)
	{
		printf("\nCan't open file!!!");
		exit(1);
	}
	int d;
	while((fscanf(fp,"%d",&d)!=EOF))
	{
		printf("%d ",d);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
