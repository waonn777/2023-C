# include<stdio.h>
#include<ctype.h>

int main()
{
	char a,j;
	a, j = 0;
	printf("大文字ならA、小文字ならBを押してください。");
	scanf_s("%c", &j);
	printf("入力:");
	scanf_s("%c", &a);
	while ((a = getchar()) != EOF) {
	if(j=='A')
		printf("%c", toupper(a));
	else
		printf("%c", tolower(a));
}
}