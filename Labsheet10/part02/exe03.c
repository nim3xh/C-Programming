#include <stdio.h>
#include <stdlib.h> /* for atoi() */
int main(int argc,char *argv[]) 
{
	float m,n,o,sum;
	float avg;
	if (argc != 5) 
	{
	printf("Format must be: %s mark 1 mark 2 mark 3 filename\n",argv[0]);
	return 1;
	}
	m = atoi(argv[1]); /* convert strings to integers */
	n = atoi(argv[2]);
	o = atoi(argv[3]);
	sum=(m+n+o);
	avg=sum/3;
	printf("%s \nreceived\nmark01=%.2f \nmark02=%.2f \nmark03=%.2f\n--------- \nAverage=%.2f\n--------- \nfilename=%s\n",argv[0],m,n,o,avg,argv[4]);
	return 0;
}
