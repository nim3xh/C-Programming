#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pbank;
	int ac;
	float am;
	
	for(int i=0;i<6;i++)
	{
		printf("Enter Account Number:");
		scanf("%d",&ac);
		
		printf("Amount:");
		scanf("%f",&am);
		
		pbank=fopen("Customer.txt","a+");
		if(pbank==NULL)
		{
		printf("\nUnable to open file\n");
		exit(1);
		}
		fprintf(pbank,"%d\t%.2f\n",ac,am);
		fclose(pbank);
	}
	pbank=fopen("Customer.txt","r");
	float amount;
	FILE *new;
	new=fopen("Customer_out.txt","w");
	while(fscanf(pbank,"%f",&amount))
	{
		if(amount>20000)
		{
			fprintf(new,"%d\t%.2f\n",ac,am);
		}
	}
	fclose(pbank);
	return 0;
}
