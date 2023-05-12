#include<stdio.h>
int main()
{
	float larg=0,c=1,N;
	while (c<=3)
	{
		printf("Enter Number:");
		scanf("%f",&N);
		if (larg<N)
		{
			larg=N;
		}
		c++;
	}
	printf("Largest number is:%.2f",larg);
	
	return 0;
}
