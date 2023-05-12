#include<stdio.h>
int main()
{
	int a=4,b=-5;
	printf("Output of Bitwise AND=%d\n",a&b);
	printf("Output of Bitwise OR=%d\n",a|b);
	printf("Output of Bitwise XOR(exclusive OR)=%d\n",a^b);
	printf("Output of Right Shift Operator=%d\n",a>>1);
	printf("Output of Left Shift Operator=%d\n",a<<1);
	printf("Output of Bitwise complement operator=%d\n",~b);
	
	return 0;
}
