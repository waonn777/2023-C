#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	srand(time(0));
	int I = (rand() % 20) + 1;
	int S = (rand() % (20-I)) + 1;
	int C = (rand() % (20-I-S)) + 1;
	if (I >= S && I >= C)
		printf("���Ȃ��́umage�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else if(S >= I && S >= C)
		printf("���Ȃ��́uknight�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else
		printf("���Ȃ��́uthief�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
}
