#include "stdio.h"
#include "string.h"
unsigned int temp;
int main()
{
	char arr[] = "$GNRMC,123BUIPOOIANSKLFUNSAUD\r\n";
	int length = strlen(arr);
	for(int i=0;i<length;i++)
	{
		temp ^= arr[i];
	}
	printf("hello world\nresult = %x",temp);
	return 0;
}
