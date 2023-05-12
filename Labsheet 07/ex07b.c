#include<stdio.h>
int main()
{
	int x=1,n,max=0;
	
	while(x<=10)
	{
		printf("Enter Number:");
		scanf("%d",&n);
		
		if(max<n)
		{
			max=n;
		}
		x++;
	}
	printf("Maximum Number is:%d\n",max);
	return 0;
}
