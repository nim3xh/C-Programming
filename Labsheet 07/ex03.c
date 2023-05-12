#include<stdio.h>
int main()
{
	float x=1,m,a,t=0;
	
	while(x<=4)
	{
	printf("Enter marks:");
	scanf("%f",&m);
	
	t=t+m;
	x=x+1;
	}
	
	a=t/(x-1);
	
	if(a>=45)
	{
	printf("pass\n");
	}
	else
	{
	printf("fail\n");
	}
	
	return 0;
}
	
	
