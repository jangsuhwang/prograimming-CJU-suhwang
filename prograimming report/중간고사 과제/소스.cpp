#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// (n은 특정한 3-10의 사이 양의 정수로 설정)하기 위해 매직넘버 최대값 최소값 매크로함수 선언
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
	int nRange = 0; // 랜덤 숫자의 범위를 설정함을 통해 N번의 기회범위를 구현할 수 있음
	int keynum = 0; // 특정한 범위의 양의 정수 1개를 저장하는 변수; up dowm 게임의 목적이 되는 정답(key)이(가) 되는 숫자
	int choice = 0; // 비교할 숫자를 입력하기 위한 변수
	int level = 0; // up down 게임 난이도 선택사항을 저장하기 위한 변수
	int range;// up down 게임에서 무작위로 생성되는 숫자의 범위크기를 저장하기 위한 변수
	double victory = 0; // 승리 횟수를 저장하기 위한 변수
	double trial = 0; // 게임 시행 횟수를 저장하기 위한 변수

	while (1)// 여러판의 게임을 반복 실행하기 위한 명령
	{
		trial++;//한번 게임이 끝나서 돌아올때마다 시행 횟수 증가
		while (1) 
		{

			printf("\n\n\n\na table of difficulty\n\nbronze level(1)\n\nsilver level(2)\n\ngold level(3)\n\nmaster(4)");
			//흥미를 높이기 위해 level로 난이도를 나눔 level1 선택 시  (n은 특정한 3-10의 사이 양의 정수로 설정) 조건 만족 
			printf("**I'll give you less than four digits. Don't worry**\n\nPlease enter your level\n\n ");
			scanf_s("\n\n%d", &level); // 변수에 1~4 level 입력값 저장
			if (level == 1) // level 변수에 입력된 값에 따라 조건 실행문이 나뉨
			{
				printf(" \n\n'range is 50 so easy'");
				nRange = 50; //level 1 에서 숫자값의 범위 저장
				break;
			}
			else if (level == 2) {
				printf(" \n\n'range is 150' *nomal*'");
				nRange = 150; //level 2 에서 숫자값의 범위 저장
				break;
			}
			else if (level == 3) {
				printf(" \n\n'your range is 300 *hard*'");
				nRange = 300; //level 3 에서 숫자값의 범위 저장
				break;
			}
			else if (level == 4) {
				(" \n\n'your range is 500' *kkkkkk good luck*");
				nRange = 500; //level 4 에서 숫자값의 범위 저장
				break;
			}
			else {
				printf("Pick again...\n\n\n\n\n\n"); // 예외값 입력시 다시 반복 44행으로 돌아감
			}
		}

		keynum = GenRandNum(nRange); // 맞춰야할 무작위의 정수 변수에 저장 
		range = GenRandNum(MAXNUM); // 부여되는 기회 조건 N번에 대해 3~10 사이 정수 조건에 맞추기위해 10이하의 크기로 저장 

		while (1) //컴퓨터가 사용자에게 (3보다 크기가 작은) n번의 기회가 나오지 않을때까지 반복 명령

		{
			if (range < MININUM) // 3보다 작은 값이 나오면 다시 값을 변수에 저장
			{
				range = GenRandNum(MAXNUM);
			}
			else break;// 3보다 작은 값이 나오지 않으면 탈출
		}
		printf("\n\nYou get the chance to match '%d'times...\n\n", range); // 무작위로 부여받은 기회 N번 횟수를 알려줌
		printf("What is the number? : ");
		scanf_s("%d", &choice);//답을 맞추기 위한 숫자 입력

		for (int j = 0; j < range; j++)
		{
			if (keynum < choice)
			{
				printf("\nDown!\n\n");//입력한 숫자가 랜덤 숫자보다 클 경우 Down 출력
				printf("What is the number? : ");
				scanf_s("%d", &choice);

				continue;
			}
			else if (keynum > choice)
			{
				printf("\nUp!\n\n");//입력한 숫자가 랜덤 숫자보다 작을 경우 Up 출력
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
			printf("\n\nYou enter the correct number~ congratulaion!\n");//답을 맞춘 경우 해당 문자 출력
			victory++; //승리 횟수 카운트
		}
		else
		{
			printf(" You enter the wrong number,try again");//답을 맞추지 못한 경우 해당 문자 출력
		}
		printf("\n\n%f전 %f승 %f패 당신의 승률은 %fpercent입니다", trial,victory,trial-victory,(victory/trial)*100); // 시행 횟수, 승, 패, 승률을 편의를 위해 알려줌
	}
}
