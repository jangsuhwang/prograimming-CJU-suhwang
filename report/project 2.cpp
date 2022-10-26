#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SCORE_NUM 9

// generating the seed number using the time clock information
void GenRandSeed()
{
	// generating the random number using the time seed
	srand((unsigned int)(time(NULL)));
	return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}


int main(void)
{
	// assigning seed
	GenRandSeed();

	// initializing variables, aver,var,std �Ҽ��� double ���� ����
	int score[30];
	int* psc;
	psc = &score[0];
	int nRange, sum = 0;
	double aver=0, var=0, std = 0;

	// score ���� ����
	printf("���� ���� ���� �����Ͻ� ����?:\n");
	scanf_s("%d", &nRange);

	// ���� score �迭 ���� ������ �̿��Ͽ� score ��; sum
	for (int i = 0; i < SCORE_NUM; i++)
	{
		;
		int nRes = GenRandNum(nRange);

		printf("Result:random number generator, %d\n\n", nRes);
		score[i] = nRes;
		sum = sum + *(psc + i);
	}

	//��� ���ϴ� ��
	aver = sum / SCORE_NUM;

	//�л� ���ϴ� ����
	for (int i = 0; i < SCORE_NUM; i++) {
		var = var + (*(psc + i) - aver) * (*(psc + i) - aver);
	}

	var = var / SCORE_NUM;

	//�ҽ��ڵ� #include <math.h> �߰��Ͽ� ������ ���ϴ� �Լ� sqrt ��� �Ͽ� ǥ������ ����
	std = sqrt(var);

	printf("aver: %.2f\n\nvariance: %.2f\n\nstandard deviation: %.2f\n", aver, var, std);

	return 0;
}
	
