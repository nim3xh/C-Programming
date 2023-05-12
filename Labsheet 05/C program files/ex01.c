#include<stdio.h>
int main()
{
	float l,w;
	printf("Enter length:");
	scanf("%f",&l);
	printf("Enter width:");
	scanf("%f",&w);
	if (l==w)
		{
			printf("Square");
		}
	else
		{
			printf("Not a square");
		}
	return 0;
}
