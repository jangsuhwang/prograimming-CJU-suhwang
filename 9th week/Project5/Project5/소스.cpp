#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;


int main(void) 
{

input_data(&a, &b);
swap_data();
print_data(a, b);
return 0;
}

void input_data(int* pa, int* pb) // ������ �Ű������� Ȱ���Ͽ� a �� b ���� �Է����ִ� �Լ�
{

	
	scanf("%d %d", &a, &b);
	*pa = a;
	*pb = b;
}

void swap_data(void)// ���� swap ���ִ� �Լ�
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void print_data(int a, int b) // ����Լ�
{
	printf("%d %d", a, b);
}