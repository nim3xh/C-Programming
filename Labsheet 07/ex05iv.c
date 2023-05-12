#include<stdio.h>
int main()
{
	int r,c,s;
	
 	for(r=1;r<=5;r++)
 	{
        for(s=r;s<5;s++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("* ");
        }
        printf("\n");
   	}
	return 0;
}
