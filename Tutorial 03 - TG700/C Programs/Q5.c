#include<stdio.h>
int main()
{
	int A[7]={9,4,7,2,7,12,24};
	int B[7]={12,8,23,9,18,6,3};
	int C[7];
	int i,x;
	
	for(i=0;i<7;i++)
	{
		x=A[i]*B[i];
		C[i]=x;
	}
	
	for(i=0;i<7;i++)
	{
		printf("C[%d] = %d\n",i,C[i]);
	}
	
	return 0;
}
