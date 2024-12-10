#include "stdio.h"

int main()
{
	int a=10,b=20;
	printf("before swap:%d %d\n",a,b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("after swap:%d %d\n",a,b);
	return 0;
}
