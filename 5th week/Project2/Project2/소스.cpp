#include<stdio.h>

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
}