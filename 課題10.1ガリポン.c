#include <stdio.h>
#include <math.h>

int main() {
	int a=0, b=0, c=0;
	printf("a,b,c�̒l����͂��Ă��������B\n");
	scanf_s("%d %d %d", &a, &b, &c);
	while (a == 0) {
		printf("0�ȊO�̒l����͂��Ă��������B\n");
		scanf_s("%d",&a);
		if (a != 0)
			break;
	}
	int D = b * b - 4 * a * c;
	if (D > 0) {
		double x1, x2;
		x1 = (-b + sqrt(D)) /(2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("��������%f,%f",x1,x2);
	}
	else if (D == 0) {
		double x1;
		x1 = (- b) / (2 * a);
		printf("�d����%f",x1);
	}
	else {
		printf("�������͂���܂���B");
	}
}