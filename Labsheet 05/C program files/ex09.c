#include<stdio.h>
int main()
{
	int N;
	
	printf("Enter Number:");
	scanf("%d",&N);
	
	if (N<0)
	{
		printf("Negative Number");
	}
	else
	{
		printf("Positive Number");
	}
	return 0;
}
