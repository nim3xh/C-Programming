#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter Number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%2==1)
		{
		sum=sum+i;
		}
	}
	printf("Sum is:%d\n",sum);
	return 0;
}
