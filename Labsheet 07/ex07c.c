#include<stdio.h>
int main()
{
	int n,max=0;
	
	for(;n!=0;)
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
