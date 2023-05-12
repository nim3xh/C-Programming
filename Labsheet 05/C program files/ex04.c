#include<stdio.h>
int main()
{
	float c=1,total=0,N,Avg;
	while (c<=10)
	{
		printf("Enter Number:");
		scanf("%f",&N);
		total=total+N;
		c++;
	}
	Avg=total/10;
	printf("Total:%.2f",total);
	printf("Average:%.2f",Avg);
	return 0;
}
