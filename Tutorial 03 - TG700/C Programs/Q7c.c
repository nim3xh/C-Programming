#include<stdio.h>
long long decimalToBinary(int n);
int main()
{
	int n,b;
	printf("Enter Number:");
	scanf("%d",&n);
	
	b=decimalToBinary(n);
	
	printf("\n%d in binary = %d \n",n,b);
}

long long decimalToBinary(int n)
{
	long long bin=0;
	int rem, i=1;
	
	while (n!=0)
	{
		rem=n%2;
		n/=2;
		bin +=rem*i;
		i *=10;
	}
	return bin;
}
