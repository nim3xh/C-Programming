#include <stdio.h>
void add(int a,int b);
void radd(int *x,int *y);
int main()
{
	int a,b;
	int *x,*y;
	
	printf("Enter Number 1:");
	scanf("%d",&a);
	
	printf("Enter Number 2:");
	scanf("%d",&b);
	
	
	add(a,b);
	radd(&a,&b);
		
	return 0;
}

void add(int a,int b)
{
	printf("-----------------\n");
	printf("+ Pass by value +");
	printf("\n-----------------\n");
	int tot=a+b;
	printf("Total: %d\n",tot);
}

void radd(int *x,int *y)
{
	printf("------------------\n");
	printf("+ Pass by refference +");
	printf("\n------------------\n");
	int tot=*x+*y;
	printf("Total: %d\n",tot);
}
