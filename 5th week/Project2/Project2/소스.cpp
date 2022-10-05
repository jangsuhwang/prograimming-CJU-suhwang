#include<stdio.h>

#define MINPRIMENUM 2 // 약수가 1과 자기 자신뿐인 자연수에 대한 기준이 되는 개수의 숫자 2를 정의//
#define MAXNUM 5      // 한줄에 5개의 소수가 출력하기 위한 기준이되는 숫자 정의//
int main()
{
	int num;              // 양의 정수구간에서 2부터 입력한 구간 사이에 소수를 구하기 위한 변수 num 선언  
	int dividecount = 0; // 약수 갯수 dividecount 변수 초기화
	int counter = 1;    // 찾은 소수의 갯수 counter=1 로 변수 초기화

	printf("input over 2 number\n"); // 범위를 결정하는 숫자 입력안내 메시지//
	scanf_s("%d", &num);             // 범위를 정해주는 변수입력 //
	for (int i = 1; i <= num; i++)   // i를 1부터 i <= num 조건이 만족하는 한 반복 시행//
	{
		for (int j = 1 ;j <= i; j++) // i조건이 만족했을때 마찬가지로 j <= i 만족하는 한 시행 (for 중첩)//
		{
			if (i % j==0)            // i/j 일때 나머지가 0 이면 약수 갯수 +1
			{
				dividecount = dividecount + 1;
			}

		}
	if (dividecount == MINPRIMENUM)  // 약수가 2개 라는 것은  1과 자신만 약수라는 것임으로 소수 이므로 숫자 출력 그리고 counter 값 +1       *1은 자신도 1이기때문에 dividecount!==2 안되어 어처피 출력안됨 //
		{
			printf("%d    ", i);
			counter = counter + 1;
		}
	if (counter>MAXNUM)                // counter 변수값이 6이되면 한줄 내려가서 출력 그리고 counter 변수값 1로 초기화
		{
			counter = 1;
			printf("\n");
		}
		dividecount = 0; // 13행으로 가서 반복 되기전 약수 개수 초기화 
	}

	return 0;
}