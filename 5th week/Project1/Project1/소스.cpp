#include<stdio.h>

int main() 

{
	int input;
	printf("input multiplication level : "); // �����ܼ� �Է� �ȳ�//
	scanf_s("%d", &input);  //���� �Է�/

	printf("\n--%d multiplication--\n", input);

	for (int i = 1; i <= 9; i++) // 1���� �����Ͽ� i=9�ɶ����� ����//
	{
		printf("%d*%d=%d\n", input, i, i); //������ ���갪 ���//
	}
}