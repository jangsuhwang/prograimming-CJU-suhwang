#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// (n�� Ư���� 3-10�� ���� ���� ������ ����)�ϱ� ���� �����ѹ� �ִ밪 �ּҰ� ��ũ���Լ� ����
#define MININUM 3 
#define MAXNUM 10

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
	// assigning seedg
	GenRandSeed();

	// initializing variables
	int nRange = 0; // ���� ������ ������ �������� ���� N���� ��ȸ������ ������ �� ����
	int keynum = 0; // Ư���� ������ ���� ���� 1���� �����ϴ� ����; up dowm ������ ������ �Ǵ� ����(key)��(��) �Ǵ� ����
	int choice = 0; // ���� ���ڸ� �Է��ϱ� ���� ����
	int level = 0; // up down ���� ���̵� ���û����� �����ϱ� ���� ����
	int range;// up down ���ӿ��� �������� �����Ǵ� ������ ����ũ�⸦ �����ϱ� ���� ����
	double victory = 0; // �¸� Ƚ���� �����ϱ� ���� ����
	double trial = 0; // ���� ���� Ƚ���� �����ϱ� ���� ����

	while (1)// �������� ������ �ݺ� �����ϱ� ���� ���
	{
		trial++;//�ѹ� ������ ������ ���ƿö����� ���� Ƚ�� ����
		while (1) 
		{

			printf("\n\n\n\na table of difficulty\n\nbronze level(1)\n\nsilver level(2)\n\ngold level(3)\n\nmaster(4)");
			//��̸� ���̱� ���� level�� ���̵��� ���� level1 ���� ��  (n�� Ư���� 3-10�� ���� ���� ������ ����) ���� ���� 
			printf("**I'll give you less than four digits. Don't worry**\n\nPlease enter your level\n\n ");
			scanf_s("\n\n%d", &level); // ������ 1~4 level �Է°� ����
			if (level == 1) // level ������ �Էµ� ���� ���� ���� ���๮�� ����
			{
				printf(" \n\n'range is 50 so easy'");
				nRange = 50; //level 1 ���� ���ڰ��� ���� ����
				break;
			}
			else if (level == 2) {
				printf(" \n\n'range is 150' *nomal*'");
				nRange = 150; //level 2 ���� ���ڰ��� ���� ����
				break;
			}
			else if (level == 3) {
				printf(" \n\n'your range is 300 *hard*'");
				nRange = 300; //level 3 ���� ���ڰ��� ���� ����
				break;
			}
			else if (level == 4) {
				(" \n\n'your range is 500' *kkkkkk good luck*");
				nRange = 500; //level 4 ���� ���ڰ��� ���� ����
				break;
			}
			else {
				printf("Pick again...\n\n\n\n\n\n"); // ���ܰ� �Է½� �ٽ� �ݺ� 44������ ���ư�
			}
		}

		keynum = GenRandNum(nRange); // ������� �������� ���� ������ ���� 
		range = GenRandNum(MAXNUM); // �ο��Ǵ� ��ȸ ���� N���� ���� 3~10 ���� ���� ���ǿ� ���߱����� 10������ ũ��� ���� 

		while (1) //��ǻ�Ͱ� ����ڿ��� (3���� ũ�Ⱑ ����) n���� ��ȸ�� ������ ���������� �ݺ� ���

		{
			if (range < MININUM) // 3���� ���� ���� ������ �ٽ� ���� ������ ����
			{
				range = GenRandNum(MAXNUM);
			}
			else break;// 3���� ���� ���� ������ ������ Ż��
		}
		printf("\n\nYou get the chance to match '%d'times...\n\n", range); // �������� �ο����� ��ȸ N�� Ƚ���� �˷���
		printf("What is the number? : ");
		scanf_s("%d", &choice);//���� ���߱� ���� ���� �Է�

		for (int j = 0; j < range; j++)
		{
			if (keynum < choice)
			{
				printf("\nDown!\n\n");//�Է��� ���ڰ� ���� ���ں��� Ŭ ��� Down ���
				printf("What is the number? : ");
				scanf_s("%d", &choice);

				continue;
			}
			else if (keynum > choice)
			{
				printf("\nUp!\n\n");//�Է��� ���ڰ� ���� ���ں��� ���� ��� Up ���
				printf("What is the number? : ");
				scanf_s("%d", &choice);
			}
			else
			{
				break;
			}
		}

		if (keynum == choice)
		{
			printf("\n\nYou enter the correct number~ congratulaion!\n");//���� ���� ��� �ش� ���� ���
			victory++; //�¸� Ƚ�� ī��Ʈ
		}
		else
		{
			printf(" You enter the wrong number,try again");//���� ������ ���� ��� �ش� ���� ���
		}
		printf("\n\n%f�� %f�� %f�� ����� �·��� %fpercent�Դϴ�", trial,victory,trial-victory,(victory/trial)*100); // ���� Ƚ��, ��, ��, �·��� ���Ǹ� ���� �˷���
	}
}
