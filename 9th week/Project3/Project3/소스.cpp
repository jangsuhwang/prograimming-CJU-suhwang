<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#define COUNTNUM 3


int main(void) {
	char str[20][20], temp[20];	// str문자열 선언, 임시로 저장할 문자열 temp 선언
	for (int i = 0; i < COUNTNUM; i++) scanf("%s", str[i]);	// n개의 문자열을 사용자로부터 입력받음
	for (int i = 0; i < COUNTNUM - 1; i++) {
		for (int j = i + 1; j < COUNTNUM; j++) {
			if (strcmp(str[i], str[j]) > 0) {	// 사전순서대로 되어있지 않으면 두 문자열의 위치를 바꿔준다.
				strcpy(temp, str[i]);	// 바꿀 때 임시로 temp에 저장한다.
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	printf("%s %s %s", str[0], str[1], str[2]);
	return 0;
=======
#include <stdio.h>
#include <string.h>
#define COUNTNUM 3


int main(void) {
	char str[20][20], temp[20];	// str문자열 선언, 임시로 저장할 문자열 temp 선언
	for (int i = 0; i < COUNTNUM; i++) scanf("%s", str[i]);	// n개의 문자열을 사용자로부터 입력받음
	for (int i = 0; i < COUNTNUM - 1; i++) {
		for (int j = i + 1; j < COUNTNUM; j++) {
			if (strcmp(str[i], str[j]) > 0) {	// 사전순서대로 되어있지 않으면 두 문자열의 위치를 바꿔준다.
				strcpy(temp, str[i]);	// 바꿀 때 임시로 temp에 저장한다.
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	printf("%s %s %s", str[0], str[1], str[2]);
	return 0;
>>>>>>> fe3343b5d54882f723900ae69d7cbacab76999f3
}