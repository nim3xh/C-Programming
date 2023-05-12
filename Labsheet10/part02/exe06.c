#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void sum(int x, int y);
void sub(int x, int y);
void mul(int x, int y);
void divide(int x, int y);
int main(int argc,char *argv[]) 
{
	int x,y;
	
	if (argc!=4)
	{
		printf("Integer 1 integer 2 Operation\n");
		return 1;	
	}
	
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	
	int result;
	
	result=strcmp(argv[3],"add");
	if(result==0)
	{
		sum(x,y);
	}
	result=strcmp(argv[3],"subtract");
	if(result==0)
	{
		sub(x,y);
	}
	result=strcmp(argv[3],"multiply");
	if(result==0)
	{
		mul(x,y);
	}
	result=strcmp(argv[3],"divide");
	if(result==0)
	{
		divide(x,y);
	}
	if(result!=0)
	{
		printf("Please enter valid operator\n");
		printf("Integer 1 integer 2 Operation\n");
	}
	return 0;
}

void sum(int x, int y)
{
	int sum;
	sum=x+y;
	printf("Sum is = %d\n",sum);
}
void sub(int x, int y)
{
	int sub;
	sub=x-y;
	printf("Difference is = %d\n",sub);
}
void mul(int x, int y)
{
	int mul;
	mul=x*y;
	printf("Multiplication is = %d\n",mul);
}
void divide(int x, int y)
{
	float div;
	div=x/(float)y;
	printf("Division is = %.2f\n",div);
}
