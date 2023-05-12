#include<stdio.h>
#include<string.h>
int main()
{
	float bv; //for bill value
	int rn; //for raffle box number
	char s[10];
	char d[50]="\nCongratulations!!You have won a ";
	printf("Please enter the bill value:");
	scanf("%f",&bv);
	
	if(bv>10000)
		{
		printf("Please select a number from the raffle box:");
		scanf("%d",&rn);
		if(rn==1)
			{
			strcat(s,"Tea Set");
			printf("%s %s\n",d,s);
			}
		else if(rn==2)
			{
			strcat(s,"Spoon Set");
			printf("%s %s\n",d,s);
			}
		else if(rn==3)
			{
			strcat(s,"Non Stick Pan");
			printf("%s %s\n",d,s);
			}
		else if(rn==4)
			{
			strcat(s,"Bowl");
			printf("%s %s\n",d,s);
			}
		else
			{
			strcat(s,"Try on another round");
			printf("%s\n",s);
			}
		}
	else
		{
		printf("You are not eligible for join the gift program\n");
		}
	return 0;
}
