#include<stdio.h>
int cube(int c);
int main()
{
	 int n,c;
	 printf("Enter Number:");
	 scanf("%d",&n);
	 c=cube(n);
	 printf("\n\nCube of the number:%d\n\n",c);
}

int cube(int n)
{
	int cube;
	cube=n*n*n;
	return cube;
}
