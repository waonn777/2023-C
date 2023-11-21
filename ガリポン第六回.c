# include<stdio.h>
#include<ctype.h>

int main()
{
	char a,j;
	a, j = 0;
	printf("‘å•¶š‚È‚çAA¬•¶š‚È‚çB‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf_s("%c", &j);
	printf("“ü—Í:");
	scanf_s("%c", &a);
	while ((a = getchar()) != EOF) {
	if(j=='A')
		printf("%c", toupper(a));
	else
		printf("%c", tolower(a));
}
}