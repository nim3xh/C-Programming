#include<stdio.h>
void change(int x,int y);
void pchange(int *a,int *b);
int main()
{
	int x,y;
	int *a,*b;
	
	printf("Enter value for x:");
	scanf("%d",&x);
	
	printf("Enter value for y:");
	scanf("%d",&y);
	
	printf("-----------------\n");
	printf("+ Pass by value +");
	printf("\n-----------------\n");
	change(x,y);
	
	printf("------------------\n");
	printf("+ Pass by refference +");
	printf("\n------------------\n");
	pchange(&x,&y);
	
	return 0;
}

void change(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf(" Value of x = %d\n",x);
	printf(" Value of y = %d\n",y);
}
void pchange(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf(" Value of x = %d\n",*a);
	printf(" Value of y = %d\n",*b);
}
