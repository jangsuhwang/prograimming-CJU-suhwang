#include <stdio.h>
int rec_sigma(int n);
int main(void)
{
	int res;
		
	res = rec_sigma(1); // n=1 ���� res �Լ��� ��ȯ ����//
	printf("result: %d\n", res); //��ȯ���� �Լ��� ���//
	return 0;
}
int rec_sigma(int n)
{
	if (n == 10)
		return 10;       //Ż������ n==10//
	else 
		return (n + rec_sigma(n + 1)); //�μ��� n+1�� �μ��� ����Ͽ� ����Լ�//
}