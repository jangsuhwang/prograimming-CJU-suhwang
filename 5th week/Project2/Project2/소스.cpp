/*#include<stdio.h>

#define MINPRIMENUM 2 // ����� 1�� �ڱ� �ڽŻ��� �ڿ����� ���� ������ �Ǵ� ������ ���� 2�� ����//
#define MAXNUM 5      // ���ٿ� 5���� �Ҽ��� ����ϱ� ���� �����̵Ǵ� ���� ����//
int main()
{
	int num;              // ���� ������������ 2���� �Է��� ���� ���̿� �Ҽ��� ���ϱ� ���� ���� num ����  
	int dividecount = 0; // ��� ���� dividecount ���� �ʱ�ȭ
	int counter = 1;    // ã�� �Ҽ��� ���� counter=1 �� ���� �ʱ�ȭ

	printf("input over 2 number\n"); // ������ �����ϴ� ���� �Է¾ȳ� �޽���//
	scanf_s("%d", &num);             // ������ �����ִ� �����Է� //
	for (int i = 1; i <= num; i++)   // i�� 1���� i <= num ������ �����ϴ� �� �ݺ� ����//
	{
		for (int j = 1 ;j <= i; j++) // i������ ���������� ���������� j <= i �����ϴ� �� ���� (for ��ø)//
		{
			if (i % j==0)            // i/j �϶� �������� 0 �̸� ��� ���� +1
			{
				dividecount = dividecount + 1;
			}

		}
	if (dividecount == MINPRIMENUM)  // ����� 2�� ��� ����  1�� �ڽŸ� ������ �������� �Ҽ� �̹Ƿ� ���� ��� �׸��� counter �� +1       *1�� �ڽŵ� 1�̱⶧���� dividecount!==2 �ȵǾ� ��ó�� ��¾ȵ� //
		{
			printf("%d    ", i);
			counter = counter + 1;
		}
	if (counter>MAXNUM)                // counter �������� 6�̵Ǹ� ���� �������� ��� �׸��� counter ������ 1�� �ʱ�ȭ
		{
			counter = 1;
			printf("\n");
		}
		dividecount = 0; // 13������ ���� �ݺ� �Ǳ��� ��� ���� �ʱ�ȭ 
	}

	return 0;
}*/

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
		printf("\n\n���ڸ� �Է����ּ��� :  ");
		scanf_s("%d", &test[i]);
	}
	for (int i = 0; i < lotto_MAX; i++) {
		printf("\n%d // %d\n", random_num[i], test[i]);
	}

	for (int i = 0; i < lotto_MAX; i++) {
		for (int j = 0; j < lotto_MAX; j++) {
			if (random_num[i] == test[j]) {
				collect_count = collect_count + 1;
				printf("%d��° ��ġ, %d��° ��ȣ %d�� %d��° ��ȣ %d�� ��ġ�մϴ�", collect_count[i], i, random_num, j, test[j]);
			}
		}
	}
	system("pause");
	return 0;
}