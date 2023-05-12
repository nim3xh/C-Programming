#include <stdio.h>
void twice (int * val);
int main()
{
	/*
	& = "Address of …"
	* = "Content of …"
	*/
	int x=56;
	int *y;
	y=&x;
	twice(y);
	printf("y value= %p\n",y);
	printf("value referred by y = %d\n",*y);
	printf("x value=%d\n",x);
	return 0;
}

void twice (int *val)
{
*val=(*val)*2;
}
