# include<stdio.h>
#include<ctype.h>

int main()
{
	char a,j;
	a, j = 0;
	printf("�啶���Ȃ�A�A�������Ȃ�B�������Ă��������B");
	scanf_s("%c", &j);
	printf("����:");
	scanf_s("%c", &a);
	while ((a = getchar()) != EOF) {
	if(j=='A')
		printf("%c", toupper(a));
	else
		printf("%c", tolower(a));
}
}