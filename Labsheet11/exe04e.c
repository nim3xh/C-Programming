#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pbank;
	float am,avg;
	int ac;
	float line=0;
	float tot=0;
	char str[20];
	
	pbank=fopen("Customer.txt","r");
	
	while(fscanf(pbank,"%d %f",&ac,&am)!=EOF)
	{
		tot=tot+am;
	}
	fclose(pbank);
	pbank=fopen("Customer.txt","r");

	while(fgets(str,100,pbank)!=NULL)
	{
		line++;
	}
	avg=tot/line;
	printf("\nAverage Amount is = %.2f\n",avg);
	fclose(pbank);
	return 0;
}
