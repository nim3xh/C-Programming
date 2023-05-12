#include<stdio.h>
int main()
{
	char c;
	
	printf("       Color Menu\n");
	printf("___________________________\n");
	printf("Orange\nBrown\nYellow\nGreen\n\n");
	
	printf("Enter the first letter of the cylinder color:");
	scanf("%c",&c);
	
	if(c=='o' || c=='O')
	{
	printf("\nCylinder content:ammonia");
	}
	else if(c=='b' || c=='B')
	{
	printf("\nCylinder content:Carbon monoxide");
	}
	else if(c=='y' || c=='Y')
	{
	printf("\nCylinder content:hydrogen");
	}
	else if(c=='g' || c=='G')
	{
	printf("\nCylinder content:oxygen");
	}
	printf("\n\nGlad to have the service\n");
	return 0;
}
