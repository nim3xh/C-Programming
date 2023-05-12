#include<stdio.h>
int main()
{
	char c;
	
	
	printf("       Color Menu\n");
	printf("___________________________\n");
	printf("Orange\nBrown\nYellow\nGreen\n\n");
	
	printf("Enter the first letter of the cylinder color:");
	scanf("%c",&c);
	
	switch(c)
	{
	case 'o':
	case 'O':
		printf("\nCylinder content:ammonia");
		break;
	case 'b':
	case 'B':
		printf("\nCylinder content:Carbon monoxide");
		break;
	case 'y':
	case 'Y':
		printf("\nCylinder content:hydrogen");
		break;
	case 'g':
	case 'G':
		printf("\nCylinder content:oxygen");
		break;
	}
	
		
	printf("\n\nGlad to have the service\n");
	
	return 0;
}
	
