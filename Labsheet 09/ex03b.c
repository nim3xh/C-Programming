#include<stdio.h>
int main()
{
	int arr[10],i,n,max,min,minindex=0,maxindex=0,value;
	
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
	
	printf("Enter number to search:");
	scanf("%d",&n);
	
	//find number
	for(i=0;i<10;i++)
	{
		if(n==arr[i])
		{
			value=1;
			break;
		}
	}
	printf("Min is: %d\n",min);
	printf("Index of Min is: %d\n",minindex);
	printf("Max is: %d\n",max);
	printf("Index of Max is: %d\n",maxindex);
	
	if(value==1)
	{
		printf("\nNumber %d is exist in the array.\n",n);
		printf("Index of number is: %d\n",i);
	}
	else
	{
		printf("\nError: Number %d is not exist in the array.\n",n);
	}
	return 0;
}
