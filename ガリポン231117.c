#include <stdio.h>
#include<ctype.h>

int main()
{
	int j;
	j = 0;
	char a;
	printf("����:");
	scanf_s("%c",&a);
	while ((a =getchar())!= EOF) {
		if (isupper(a))
		{
			j += 1;
		}
		else
		{
			j += 0;
		}
	}
	if (j >= 1)
		printf("�啶������");
	else
		printf("�啶���Ȃ�");
}