#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pbank;
	int ac,t=0;
	float am;
	
	pbank=fopen("Customer.txt","r");
	if(pbank==NULL)
	{
		printf("\nUnable to open file\n");
		exit(1);
	}
	printf("Account Number\tTax\n");
	while(fscanf(pbank,"%d %f",&ac,&am)!=EOF)
	{
		if(am>25000)
		{
			float tax;
			tax=am*0.05;
			t++;
			
			printf("%d\t\t%.2f\n",ac,tax);
		}
	}
	printf("\n%d customers need to pay tax\n",t);
	fclose(pbank);
	return 0;
}
