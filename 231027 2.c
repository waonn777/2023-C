#include <stdio.h>

int main()
{
	int n;
	printf("nを入力してください\n");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("偶数です\n");
	}
	else
	{
		printf("奇数です\n");
	}
	return 0;
}
