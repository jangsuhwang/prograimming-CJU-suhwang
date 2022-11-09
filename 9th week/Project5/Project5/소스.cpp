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

void input_data(int* pa, int* pb) // 포인터 매개변수를 활용하여 a 와 b 값을 입력해주는 함수
{

	
	scanf("%d %d", &a, &b);
	*pa = a;
	*pb = b;
}

void swap_data(void)// 값의 swap 해주는 함수
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void print_data(int a, int b) // 출력함수
{
	printf("%d %d", a, b);
}