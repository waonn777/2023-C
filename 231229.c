#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	srand(time(0));
	int I = (rand() % 20) + 1;
	int S = (rand() % (20-I)) + 1;
	int C = (rand() % (20-I-S)) + 1;
	if (I >= S && I >= C)
		printf("あなたは「mage」です。ステータスはinteligence:%d stamina:%d charisma:%d です。", I, S, C);
	else if(S >= I && S >= C)
		printf("あなたは「knight」です。ステータスはinteligence:%d stamina:%d charisma:%d です。", I, S, C);
	else
		printf("あなたは「thief」です。ステータスはinteligence:%d stamina:%d charisma:%d です。", I, S, C);
}
