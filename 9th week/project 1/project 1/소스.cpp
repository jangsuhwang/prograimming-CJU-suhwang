#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80];
	strcpy(str, "wine"); // ���� �迭 star�� wine ����
	strcat(str, "apple"); // �ڿ� apple �̾� ����
	strncpy(str, "pear", 1); // p�� ������ ����
	printf("%s, %d\n", str, strlen(str));
	return 0;
}
