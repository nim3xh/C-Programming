#include<stdio.h>
int max(int maximum); //Function prototype
int main() // main Function
{
	int maximum;
	maximum=max(maximum); //Calls the maximum function
	printf("\nMaximum = %d\n",maximum);
	
	return 0;
}
	//Define the function
	
	int max(int maximum)
	{
		int fn,sn,tn;
		printf("Enter First Number:");
		scanf("%d",&fn);
		printf("Enter Second Number:");
		scanf("%d",&sn);
		printf("Enter Third Number:");
		scanf("%d",&tn);
		
		if (fn>sn && fn>tn)
			maximum=fn;
		else if (sn>fn && sn>tn)
			maximum=sn;
		else
			maximum=tn;
		return maximum;
	}
