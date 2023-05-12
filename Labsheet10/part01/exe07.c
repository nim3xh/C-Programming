#include <stdio.h>
int main()
{
	int a,b;
	int *x,*y;
	
	printf("Enter Number 1:");
	scanf("%d",&a);
	
	printf("Enter Number 2:");
	scanf("%d",&b);
	
	x=&a;
	y=&b;
	
	int tot=*x+*y;
	
	printf("Total: %d\n",tot);
	
	return 0;
}
