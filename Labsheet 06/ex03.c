#include<stdio.h>
int main()
{
	char x;
	
	printf("Enter any character:");
	scanf("%c",&x);
	
	if (('a'<=x && 'z'>=x)||('A'<=x && 'Z'>=x))
	{
		printf("%c is a LETTER\n",x);
		if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
		{
		printf("%c is vowel\n",x);
		}
		else
		{
		printf("%c is not a vowel\n",x);
		}
	}
	else
	{
		printf("%c is not a LETTER\n",x);
	}
	
	return 0;
}
