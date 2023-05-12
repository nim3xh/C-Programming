#include <stdio.h>
int main( )
{
	int *arr[4];
	int a=5, b=25, c=12,d=76;
	arr[0]=&a; arr[1]=&b; arr[2]=&c; arr[3]=&d;
	for (int i=0; i<4; i++)
		printf("the value is %d=%d, address is %p\t\n", i, (*arr[i]), arr[i]);
	int arr1[3]={45,15,89};
	int *ptr1;
	ptr1= arr1;
	printf("the value is %d\n",*ptr1) ;
	ptr1++;
	printf("the value is %d\n",*ptr1) ;
	ptr1++;
	printf("the value is %d\n",*ptr1) ;
	return 0;
}
