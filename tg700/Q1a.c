#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=0;c<r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(r=4;r>0;r--)
	{
		for(c=r;c>0;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
