#include<stdio.h>
int main()
{
	int m1[3][3];
	int m2[3][3];
	int add[3][3];
	int r,c;
	
	printf("Enter elements for first matrix:");
	//get elements for first array
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&m1[r][c]);
			
		}
	}
	
	//get elements for second array
	printf("\nEnter elements for second matrix:");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&m2[r][c]);
			
		}
	}
	
	//add both arrays
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			add[r][c]=m1[r][c]+m2[r][c];	
		}
	}
	
	//print sum of both arrays
	printf("\n\nSum of both matrixss:\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",add[r][c]);	
		}
		printf("\n");
	}
	
	return 0;
}
