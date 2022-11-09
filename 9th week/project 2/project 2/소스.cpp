#include <stdio.h>
#include <string.h>
#define MAX 80
#define RELEASE 5
int main(void)
{
	char str[MAX];// 과일이름 5자리 나타낼 배열
	char res_str[MAX]; // 최종적으로 나타낼 배열
	const char* star = "**********";// 5자리 이후 별을 나타내기 위한 배열
	int len;//길이 크기를 저장할 변수
	printf("과일 입력\n"); 
	scanf("%s", str); // 과일 문자열 변수에 입력
	len = strlen(str);// str 배열에 길이를 값을 저장함

	if (len <= RELEASE)
	{
		strcpy(res_str, str); // <=RELEASE 이면 다른거 생각 할 필요없이 그냥 문자열 다 가져다 붙이면됨
	}
	else
	{
		strncpy(res_str, str, RELEASE); // 그 이외의 경우 5번째 문자열 까지만 부분적으로 가져다 붙임
		res_str[5] = '\0';
		strncat(res_str, star, len - RELEASE); // 5번째 이후에 나머지 길이는 star 가져다 붙임
	}
	printf("입력한 단어 : %s, 생략한 단어 : %s\n", str, res_str);
	return 0;
}
// strcpy 대입
// strcpy 적치

		
	
