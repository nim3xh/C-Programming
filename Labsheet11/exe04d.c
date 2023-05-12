#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pbank;
	pbank=fopen("Customer.txt","r");
	if(pbank==NULL)
	{
		printf("\nUnable to open file\n");
		exit(1);
	}
	
	int ac;
	float am,high=0;
	
	while(fscanf(pbank,"%d %f",&ac,&am)!=EOF)
	{
		if(high<am)
		{
			high=am;
		}
	}
	printf("\nHighest amount is %.2f\n",high);
	return 0;
}
