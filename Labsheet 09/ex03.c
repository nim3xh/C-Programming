#include<stdio.h>
int main()
{
	int arr[10],i,max,min,minindex=0,maxindex=0;
	
	printf("Enter array values:");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	//find max
	for(i=0;i<10;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			maxindex=i;
		}
	}
	//find min
	for(i=0;i<10;i++)
	{	
		if(min>arr[i])
		{
			min=arr[i];
			minindex=i;
		}
	}
	
	printf("Min is: %d\n",min);
	printf("Index of Min is: %d\n",minindex);
	printf("Max is: %d\n",max);
	printf("Index of Max is: %d\n",maxindex);
	
	return 0;
}
