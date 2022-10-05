#include<stdio.h>

int main() 

{
	int input;
	printf("input multiplication level : "); // 구구단수 입력 안내//
	scanf_s("%d", &input);  //변수 입력/

	printf("\n--%d multiplication--\n", input);

	for (int i = 1; i <= 9; i++) // 1부터 시작하여 i=9될때까지 시행//
	{
		printf("%d*%d=%d\n", input, i, i); //구구단 연산값 출력//
	}
}