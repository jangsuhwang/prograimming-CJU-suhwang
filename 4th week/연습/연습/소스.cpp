#include <stdio.h>

int main(void)

{
	char fruits;
	int cnt;

	printf("what's your favorite fruit?: ");

	scanf_s ("%c \n",&fruits);

	printf("how many\n: ");

	scanf_s("%d", &cnt);

	printf("%s�� %d�� �帳�ϴ�.", fruits, cnt);
	return 0;
}