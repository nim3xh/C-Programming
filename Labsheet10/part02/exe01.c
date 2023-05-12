#include <stdio.h>
int main( )
{
int *arr[4];
int a=5, b=25, c=12,d=76;
arr[0]=&a; arr[1]=&b; arr[2]=&c; arr[3]=&d;
for (int i=0; i<4; i++)
printf("the value is %d=%d, address is %p\t\n", i, (*arr[i]), arr[i]);
return 0;
}
