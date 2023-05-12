#include<stdio.h>
int main()
{
	for(int r=1;r<=4;r++)
	{
		for(int c=1;c<=r;c++)
		{
		printf("%d",c);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(int r=1;r<=4;r++)
	{
		for(int c=1;c<=r;c++)
		{
		printf("%d",r);
		}
		printf("\n");
	}
	return 0;
}
