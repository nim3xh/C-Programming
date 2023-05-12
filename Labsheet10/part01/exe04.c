#include<stdio.h>

int main() {
	int k;
	int *ptr;
	k=5;
	ptr=&k;
	printf("value of k = %d and it is stored at %p\n", k, &k);
	printf("value of ptr = %p and it is stored at %p\n", ptr, &ptr);
	printf("the value of the integer pointed to by ptr is = %d \n", *ptr);
	return 0;
}
