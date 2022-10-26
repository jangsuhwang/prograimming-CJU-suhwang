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

	// initializing variables, aver,var,std 소수값 double 변수 지정
	int score[30];
	int* psc;
	psc = &score[0];
	int nRange, sum = 0;
	double aver=0, var=0, std = 0;

	// score 범위 설정
	printf("몇점 만점 으로 설정하실 거죠?:\n");
	scanf_s("%d", &nRange);

	// 랜덤 score 배열 저장 포인터 이용하여 score 합; sum
	for (int i = 0; i < SCORE_NUM; i++)
	{
		;
		int nRes = GenRandNum(nRange);

		printf("Result:random number generator, %d\n\n", nRes);
		score[i] = nRes;
		sum = sum + *(psc + i);
	}

	//평균 구하는 식
	aver = sum / SCORE_NUM;

	//분산 구하는 과정
	for (int i = 0; i < SCORE_NUM; i++) {
		var = var + (*(psc + i) - aver) * (*(psc + i) - aver);
	}

	var = var / SCORE_NUM;

	//소스코드 #include <math.h> 추가하여 제곱근 구하는 함수 sqrt 사용 하여 표준편차 도출
	std = sqrt(var);

	printf("aver: %.2f\n\nvariance: %.2f\n\nstandard deviation: %.2f\n", aver, var, std);

	return 0;
}
	
