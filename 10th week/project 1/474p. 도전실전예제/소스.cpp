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

	printf("범위를 지정할 숫자를 입력해주세요\n");
	scanf_s("%d", &num);
	pi = (int*)malloc(num * sizeof(int));//포인터 동적할당 주소 입력

	if (pi == NULL)//메모리 부족할 경우 예외처리
	{
		printf("메모리가 부족합니다!\n");
		exit(1);
	}

	for (int i = MINPRIMENUM; i < num; i++)   // i를 2부터 i <= num 조건이 만족하는 한 반복 시행//
	{
		for (int j = 1; j <(i+1); j++) // i조건이 만족했을때 마찬가지로 j <= i 만족하는 한 시행 (for 중첩)//
		{
			if (i % j == 0)            // i/j 일때 나머지가 0 이면 약수 갯수 +1
			{
				dividecount = dividecount + 1;
			}

		}

		if (dividecount == MINPRIMENUM)  // 약수가 2개 라는 것은  1과 자신만 약수라는 것임으로 소수 이므로 숫자 출력 그리고 counter 값 +1       *1은 자신도 1이기때문에 dividecount!==2 안되어 어처피 출력안됨 //
		{
			pi[i- MINPRIMENUM] = i;
		}
		else if ( dividecount != MINPRIMENUM)// 약수가 2개가 아닌 것들은 숫자 0으로 배열에 집어넣음
		{
			pi[i- MINPRIMENUM] = 0;
		}
		dividecount = 0;
	}
	for (int i = 0; i < num- MINPRIMENUM; i++)//for문 이용하여 입력한 숫자까지 출력
	{
		if (count > 4)// 5번째 출력마다 줄 내림
		{
			count = 0;//줄 내리면 카운트 초기화
			printf("\n");
		}
		if (pi[i] == 0)// 0으로 저장했던 것들
		{
			printf("%5c", 'X');// 문자 X로 출력
		}
		else
		{
			printf("%5d", pi[i]);//이외의 것들은 저장된 값 그대로 출력
		}

		

		count++;//숫자 한번 출력 될 때 마다 카운트 해줌
	}
	free(pi);//동적할당 저장공간 반납
}

	

