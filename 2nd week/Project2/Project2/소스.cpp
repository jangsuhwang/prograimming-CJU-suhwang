#include <stdio.h>
int main(void)              

{

	char ch;                                      // 문자를 저장할 변수


	printf("문자 입력:\n");                 // 입력 안내 메세지 

	scanf_s("%c", &ch);                          // 변수 ch에 값 입력

	printf("문자 입력:%c\n", ch);              // 문자입력: %c칸에 ch값 출력

	printf("%c 문자의 아스키 코드 값은 :%d\n", ch, ch);

	return 0;

}