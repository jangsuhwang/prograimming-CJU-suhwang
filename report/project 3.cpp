#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 2

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

	// 
	int nRange = 0;
	int array1[M][N];
	int array2[N][M];
	int res = 0, m = 0, n = 0;


	// ���� ���� ���� ���� �������� �������� �迭�� ���� ���� ���� ����
	printf("��� ���� ũ�� ������ �������ּ���:\n");
	scanf_s("%d", &nRange);


	// �ߺ� for������ 2���� �迭�� �������� ���� �־ array1 ��� ����
	printf("\narray1");
	for (int i = 0; i < M; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			// generating the random number
			int nRes = GenRandNum(nRange);
			array1[i][j] = nRes;
			printf("%d\t", array1[i][j]);
		}
	}
	// �ߺ� for������ 2���� �迭�� �������� ���� �־ array2 ��� ����
	printf("\narray2");
	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < M; j++)
		{
			// generating the random number
			int nRes = GenRandNum(nRange);
			array2[i][j] = nRes;
			printf("%d\t", array2 [i][j]);
		}
	}
	//�� �࿭�� �� array3
	printf("\n\n(array1*array2) \n\n");
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int res = 0;
			for (int h = 0; h < N; h++)
			{
				res += (array1[i][h]) * (array2[h][i]);
			}
			printf("%d\t",res);
		}
		printf("\n");
	}
}
		