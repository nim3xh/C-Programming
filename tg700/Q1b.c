#include<stdio.h>

int main()
{
	int fbs[20]; //For Fibonacci Series
	int n; //for loops

	/*Assign values for First two Numbers of Fibonacci Series*/
	fbs[0]=0;
	fbs[1]=1;
	
	/*for calculate first 20 values of Fibonacci Series*/
	for(n=2;n<20;n++)
	{
		fbs[n]=fbs[n-1]+fbs[n-2];
	}
	
	/*for print first 20 values of Fibonacci Series*/	
	printf("Fibonacci Sequence is:");
	for(n=0;n<20;n++)
	{
		printf(" %d",fbs[n]);
	}

	printf("\n");

	return 0;
}
