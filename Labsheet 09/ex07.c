#include<stdio.h>
int main()
{
	int x,i,j;
	int arr[x];
	
	printf("How many bars in the chart:");
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		printf("Enter values of %d bar:",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nElement\tvalue\tHistogram\n");
	for(i=0;i<x;i++)
	{
		printf("%d\t",i);
		printf("%d\t",arr[i]);
		for(j=0;j<arr[i];j++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
		
}
