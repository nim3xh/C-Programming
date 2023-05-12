#include<stdio.h>
int main()
{
	int r,c,s;
	
 	for(r=1;r<=5;r++)
 	{
	int z = 10;
        for(s=1;s<=z/2-r;s++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            printf("*");
        }

        printf("\n");
    }
	return 0;
}
