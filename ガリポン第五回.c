#include <stdio.h>

int main(void)
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		if (i % 13 == 0 || i%17==0)
		{
			printf_s("%d\n", i);
		}
	
	}
}