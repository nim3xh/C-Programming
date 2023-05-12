#include<stdio.h>
int main()
{
	int maxsize=10;
	int arr[maxsize];
	int i,N;
	printf("Enter %d elements to the array:\n",maxsize);
	for(i=0;i<maxsize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nPrint array elements");
	for(i=0;i<maxsize;i++)
	{
		printf(" %d",arr[i]);
	}
	
	return 0;
}
