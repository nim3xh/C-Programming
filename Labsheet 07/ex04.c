#include<stdio.h>
int main()
{
	int x,n,y;
	
	printf("Enter number to print the table of:");
	scanf("%d",&n);
	
	for(x=1;x<=10;x++)
	{
	y=n*x;
	printf("%d * %d =%d\n",n,x,y);
	}
	return 0;
}
