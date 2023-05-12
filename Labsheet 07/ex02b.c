#include<stdio.h>
int main()
{
	int n,m,x,tot=0;
	
	printf("Enter m:");
	scanf("%d",&m);
	
	printf("Enter n:");
	scanf("%d",&x);
	
	for(n=m;n<=x;n++)
	{
		tot=tot+n;
	}
	
	printf("Sum of natural numbers between %d-%d:%d\n",m,x,tot);
	return 0;
}
