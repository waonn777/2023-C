#include <stdio.h>

int main()
{
	int n;
	printf("n����͂��Ă�������\n");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("�����ł�\n");
	}
	else
	{
		printf("��ł�\n");
	}
	return 0;
}
