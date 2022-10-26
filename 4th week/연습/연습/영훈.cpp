#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define END_COND 999
#define lotto_MAX 6

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
int a, b, c, d, e, f;

int main(void)
{
	// assigning seedg
	GenRandSeed();

	// initializing variables
	int nRange = 45;
	int random_num[lotto_MAX];
	int test[lotto_MAX];
	int collect_count = 0;

	for (int i = 0; i < lotto_MAX; i++) {
		random_num[i] = GenRandNum(nRange);
		printf("\n\n숫자를 입력해주세요 :  ");
		scanf_s("%d", &test[i]);
	}
	for (int i = 0; i < lotto_MAX; i++) {
		printf("\n%d // %d\n", random_num[i], test[i]);
	}

	for (int i = 0; i < lotto_MAX; i++) {
		for (int j = 0; j < lotto_MAX; j++) {
			if (random_num[i] == test[j]) {
				collect_count = collect_count + 1;
				printf("%d번째 일치, %d번째 번호 %d와 %d번째 번호 %d가 일치합니다", collect_count[i], i, random_num, j, test[j]);
			}
		}
	}
	system("pause");
	return 0;
}