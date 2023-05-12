#include<stdio.h>
int main()
{
	int x,n,max=0;
	
	for(x=1;x<=10;x++)
	{
		printf("Enter Number:");
		scanf("%d",&n);
		
		if(max<n)
		{
			max=n;
		}
	}
	
	printf("Maximum Number is:%d\n",max);
	return 0;
}
