#include <stdio.h>
int rec_sigma(int n);
int main(void)
{
	int res;
		
	res = rec_sigma(1); // n=1 시작 res 함수값 반환 받음//
	printf("result: %d\n", res); //반환받은 함수값 출력//
	return 0;
}
int rec_sigma(int n)
{
	if (n == 10)
		return 10;       //탈출조건 n==10//
	else 
		return (n + rec_sigma(n + 1)); //인수가 n+1인 인수를 사용하여 재귀함수//
}