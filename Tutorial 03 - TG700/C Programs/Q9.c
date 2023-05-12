#include<stdio.h>

int even(int integers[],int array[],int x);
int x;

int main()
{
    int integers[x];
    int array[x];
    int i;
    int k;

	printf("how many elements:");
	scanf("%d",&x);

	for(i=0;i<x;i++)
	{
		printf("Enter number %d :",i+1);
		scanf("%d",&integers[i]);
	}

	even(integers,array,x);

	for(k=0;k<x;k++)
	{
		printf("%d\n",array[k]);
	}
	return 0;
}
int even(int integers[],int array[],int x)
{
	int a;
	for(a=0;a<x;a++)
	{
		if(integers[a]%2==0)
		{
			array[a]=1;
		}
		else
		{
			array[a]=0;
		}
	}
}
