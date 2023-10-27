#include <stdio.h>

int kaijyo(int);
int main()
{
	int n;
	n = 0;
	printf("n‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf_s("%d", &n);
	printf("%d", kaijyo(n));
}

int kaijyo(int x)
{
	int y, i;
	y = 1;
		for(i=1;i<=x;i++)
		{
			y *= i;
	}
	return y;
}