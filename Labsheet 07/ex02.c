#include<stdio.h>
int main()
{
	int n,x,tot=0;
	
	printf("Enter n:");
	scanf("%d",&x);
	
	for(n=1;n<=x;n++)
	{
		tot=tot+n;
	}
	
	printf("Sum of natural numbers between 1-%d:%d\n",x,tot);
	return 0;
}
