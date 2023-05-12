#include<stdio.h>
int main()
{
	for(int x=1;x<=5;x++)
	{
		for(int y=1;y<=5;y++)
		{
		printf("*");
		}
	printf("\n");
	}
	
	printf("\n\n");
	
	for(int x=0;x<6;x++)
	{
		for(int y=0;y<=x;y++)
		{
		printf("*");
		}
	printf("\n");
	}
	
	printf("\n\n");
	
	for(int x=5;x>=1;x--)
	{
		for(int y=1;y<=x;y++)
		{
		printf("*");
		}
	printf("\n");
	}
	
	printf("\n\n");
	
	for(int r=1;r<=5;r++)
 	{
        for(int s=r;s<5;s++){
            printf(" ");
        }
        for(int c=1;c<=r;c++){
            printf("* ");
        }
        printf("\n");
   	}
   	
   	printf("\n\n");
   	
   	int n=5;
   	for(int r=0;r<5;r++)
	{
	for(int s=0;s<=r;s++)
	{
	printf(" ");
	}
	for(int c=n;c>=1;c--)
	{
	printf("* ");
	}
	n--;
	printf("\n");
	}
	
	printf("\n\n");
	
	for(int r=1;r<=5;r++)
 	{
	int z = 10;
        for(int s=1;s<=z/2-r;s++)
        {
            printf(" ");
        }
        for(int c=1;c<=2*r-1;c++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    printf("\n\n");
	return 0;
}
