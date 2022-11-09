#include <stdio.h>
void add_by_pointer(int* pa, int* pb, int* pr)
{
	*pr = *pa + *pb; //포인터 끼리 연산
}
int main(void)
{
	int a = 10, b = 20, res = 0;
	add_by_pointer(&a, &b, &res); // 포인터에 주소값 입력 되면서 값을 가져다 쓰며 연산됨
	printf("%d",res);
	return 0;
}