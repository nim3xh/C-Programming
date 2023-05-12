#include<stdio.h>
int main()
{
	int r,c,s;
	int n=5;
	for(r=0;r<5;r++)
	{
	for(s=0;s<=r;s++)
	{
	printf(" ");
	}
	for(c=n;c>=1;c--)
	{
	printf("* ");
	}
	n--;
	printf("\n");
	}
	return 0;
}
