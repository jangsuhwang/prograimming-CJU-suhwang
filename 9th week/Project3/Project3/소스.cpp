<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#define COUNTNUM 3


int main(void) {
	char str[20][20], temp[20];	// str���ڿ� ����, �ӽ÷� ������ ���ڿ� temp ����
	for (int i = 0; i < COUNTNUM; i++) scanf("%s", str[i]);	// n���� ���ڿ��� ����ڷκ��� �Է¹���
	for (int i = 0; i < COUNTNUM - 1; i++) {
		for (int j = i + 1; j < COUNTNUM; j++) {
			if (strcmp(str[i], str[j]) > 0) {	// ����������� �Ǿ����� ������ �� ���ڿ��� ��ġ�� �ٲ��ش�.
				strcpy(temp, str[i]);	// �ٲ� �� �ӽ÷� temp�� �����Ѵ�.
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
	char str[20][20], temp[20];	// str���ڿ� ����, �ӽ÷� ������ ���ڿ� temp ����
	for (int i = 0; i < COUNTNUM; i++) scanf("%s", str[i]);	// n���� ���ڿ��� ����ڷκ��� �Է¹���
	for (int i = 0; i < COUNTNUM - 1; i++) {
		for (int j = i + 1; j < COUNTNUM; j++) {
			if (strcmp(str[i], str[j]) > 0) {	// ����������� �Ǿ����� ������ �� ���ڿ��� ��ġ�� �ٲ��ش�.
				strcpy(temp, str[i]);	// �ٲ� �� �ӽ÷� temp�� �����Ѵ�.
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	printf("%s %s %s", str[0], str[1], str[2]);
	return 0;
>>>>>>> fe3343b5d54882f723900ae69d7cbacab76999f3
}