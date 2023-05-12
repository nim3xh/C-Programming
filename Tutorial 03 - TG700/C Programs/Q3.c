#include<stdio.h>
int main()
{
	int i,f=1,n;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	
	printf("\n\nFactorial of %d is %d.\n",n,f);
	
	return 0;
}
