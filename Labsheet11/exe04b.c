#include<stdio.h>
int main()
{
	FILE *pbank;
	int ac;
	pbank=fopen("Customer.txt","r");
	float amount;
	FILE *new;
	new=fopen("Customer_out.txt","w");
	while(fscanf(pbank,"%d %f",&ac,&amount)!=EOF)
	{
		if(amount>20000)
		{
			fprintf(new,"%d\t%.2f\n",ac,amount);
		}
	}
	fclose(new);
	fclose(pbank);
	return 0;
}
