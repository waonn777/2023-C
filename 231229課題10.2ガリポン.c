#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	srand(time(0));
	int I = (rand() % 20) + 1;
	int S = (rand() % (20 - I)) + 1;
	int C = 20 - I - S;
	if (I > S && I > C)
		printf("���Ȃ��́umage�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else if (S > I && S > C)
		printf("���Ȃ��́uknight�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else if(C>I && C>S)
		printf("���Ȃ��́uthief�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else if(I==S && I>C)
		printf("���Ȃ��́uspecial character�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else if (I == C && I > S)
		printf("���Ȃ��́uspecial character�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);
	else
		printf("���Ȃ��́uspecial character�v�ł��B�X�e�[�^�X��inteligence:%d stamina:%d charisma:%d �ł��B", I, S, C);

}