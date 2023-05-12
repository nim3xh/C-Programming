#include<stdio.h>
int reverse(int n);
int main()
{
	int n,rev;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	rev=reverse(n);
	
	printf("Reversed Number:%d\n",rev);
	
	return 0;
}

int reverse(int n)
{
	int rem,reverse=0;
	while(n!=0)
	{
	rem=n%10;
	reverse=reverse*10+rem;
	n/=10;
	}
	return reverse;
}
