#include<stdio.h>
#include<stdlib.h>
#define INTIAL 2
#define LINENUM 5
#define MINPRIMENUM 2
int main()
{
	int* pi;
	int i = 0;
	int num = 0;
	int count = 0;
	unsigned int dividecount = 0;

	printf("������ ������ ���ڸ� �Է����ּ���\n");
	scanf_s("%d", &num);
	pi = (int*)malloc(num * sizeof(int));//������ �����Ҵ� �ּ� �Է�

	if (pi == NULL)//�޸� ������ ��� ����ó��
	{
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}

	for (int i = MINPRIMENUM; i < num; i++)   // i�� 2���� i <= num ������ �����ϴ� �� �ݺ� ����//
	{
		for (int j = 1; j <(i+1); j++) // i������ ���������� ���������� j <= i �����ϴ� �� ���� (for ��ø)//
		{
			if (i % j == 0)            // i/j �϶� �������� 0 �̸� ��� ���� +1
			{
				dividecount = dividecount + 1;
			}

		}

		if (dividecount == MINPRIMENUM)  // ����� 2�� ��� ����  1�� �ڽŸ� ������ �������� �Ҽ� �̹Ƿ� ���� ��� �׸��� counter �� +1       *1�� �ڽŵ� 1�̱⶧���� dividecount!==2 �ȵǾ� ��ó�� ��¾ȵ� //
		{
			pi[i- MINPRIMENUM] = i;
		}
		else if ( dividecount != MINPRIMENUM)// ����� 2���� �ƴ� �͵��� ���� 0���� �迭�� �������
		{
			pi[i- MINPRIMENUM] = 0;
		}
		dividecount = 0;
	}
	for (int i = 0; i < num- MINPRIMENUM; i++)//for�� �̿��Ͽ� �Է��� ���ڱ��� ���
	{
		if (count > 4)// 5��° ��¸��� �� ����
		{
			count = 0;//�� ������ ī��Ʈ �ʱ�ȭ
			printf("\n");
		}
		if (pi[i] == 0)// 0���� �����ߴ� �͵�
		{
			printf("%5c", 'X');// ���� X�� ���
		}
		else
		{
			printf("%5d", pi[i]);//�̿��� �͵��� ����� �� �״�� ���
		}

		

		count++;//���� �ѹ� ��� �� �� ���� ī��Ʈ ����
	}
	free(pi);//�����Ҵ� ������� �ݳ�
}

	

