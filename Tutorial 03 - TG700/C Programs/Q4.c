#include<stdio.h>
int main()
{
	int arr[10];
	int i,n;
	
	for(i=0;i<10;i++)
	{
		printf("Enter number:");
		scanf("%d",&n);
		if(n<=100 && n>=0)
		{
			arr[i]=n;
		}
		else
		{
			i=i-1;
		}
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]<=50)
		{
		printf("%d ",arr[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}
