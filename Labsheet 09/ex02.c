#include<stdio.h>
int main()
{
	int x,i;
	float arr[x],sum=0;
	
	printf("Input size of the array:");
	scanf("%d",&x);
	printf("Input elements:");
	
	for(i=0;i<x;i++)
	{
		scanf("%f",&arr[i]);
	}
	
	for(i=0;i<x;i++)
	{
		sum=sum+arr[i];
	}
	
	printf("Sum of all elements= %.2f\n",sum);
	printf("Average = %.2f\n",sum/x);
	
	return 0;
}
