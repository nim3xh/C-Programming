#include<stdio.h>
int smallest(int x,int y,int z);
int main()
{
	int x,y,z,s;
	
	printf("Enter Number:");
	scanf("%d",&x);
	
	printf("Enter Number:");
	scanf("%d",&y);
	
	printf("Enter Number:");
	scanf("%d",&z);
	
	s=smallest(x,y,z);
	
	printf("\n\nSmallest Number is: %d\n\n",s);
	
	return 0;
}

int smallest(int x,int y,int z)
{
	int s;
	if(x<y&&x<z)
	{
	s=x;
	}
	else if(y<z&&y<x)
	{
	s=y;
	}
	else
	{
	s=z;
	}
	return s;
}
