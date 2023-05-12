#include <stdio.h>
#include <stdlib.h> /* for atoi() */
int main(int argc,char *argv[]) 
{
	int m,n;
	if (argc != 4) 
	{
	printf("Format must be: %s m n filename\n",argv[0]);
	return 1;
	}
	m = atoi(argv[1]); /* convert strings to integers */
	n = atoi(argv[2]);
	printf("%s received m=%i n=%i filename=%s\n",argv[0],m,n,argv[3]);
	return 0;
}
