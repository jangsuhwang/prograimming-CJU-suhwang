#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80];
	strcpy(str, "wine"); // 문자 배열 star에 wine 복사
	strcat(str, "apple"); // 뒤에 apple 이어 붙임
	strncpy(str, "pear", 1); // p만 가져다 복사
	printf("%s, %d\n", str, strlen(str));
	return 0;
}
