#include<stdio.h>
int main()
{
	int i,x,first[10],second[10],third[20];
	
	printf("Enter elements for first array:");
	
	//get elemetns for first array
	for(i=0;i<10;i++)
	{
		 scanf("%d",&first[i]);
	}
	
	printf("Enter elements for second array:");
	//get elements for second array
	for(i=0;i<10;i++)
	{
		 scanf("%d",&second[i]);
	}
	
	//add element to third array
	for(i=0;i<20;i++)
	{
		for(x=0;x<10;x++)
		{
			third[x]=first[x];
		}
		for(x=0;x<10;x++)
		{
			third[x+10]=second[x];
		}
	}
	printf("Elements of third array:\n");
	for(i=0;i<20;i++)
	{
		printf(" %d",third[i]);
	}
	
	printf("\n");
	
	return 0;
}
