#include<stdio.h>
#include<float.h>

int main(){
	int i;
	double max_weight, min_weight;

	double weight[3];

	weight[0] = 72.0;
	weight[1] = 101.5;
	weight[2] = 52.4;

	max_weight = -DBL_MAX;
	min_weight = DBL_MAX;

	for (i = 0; i < 3;i++) {
		if (weight[i] >= max_weight)
		{
			max_weight = weight[i];
	}
		if (weight[i] <= min_weight)
		{
			min_weight = weight[i];
		}
	}
	printf("��ԏd���l�́A%g kg�ł��B\n",max_weight);
	printf("��Ԍy���l�́A%g kg�ł��B\n", min_weight);
	return 0;
}