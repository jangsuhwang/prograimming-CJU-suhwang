#include <stdio.h>
#include <string.h>
#define MAX 80
#define RELEASE 5
int main(void)
{
	char str[MAX];// �����̸� 5�ڸ� ��Ÿ�� �迭
	char res_str[MAX]; // ���������� ��Ÿ�� �迭
	const char* star = "**********";// 5�ڸ� ���� ���� ��Ÿ���� ���� �迭
	int len;//���� ũ�⸦ ������ ����
	printf("���� �Է�\n"); 
	scanf("%s", str); // ���� ���ڿ� ������ �Է�
	len = strlen(str);// str �迭�� ���̸� ���� ������

	if (len <= RELEASE)
	{
		strcpy(res_str, str); // <=RELEASE �̸� �ٸ��� ���� �� �ʿ���� �׳� ���ڿ� �� ������ ���̸��
	}
	else
	{
		strncpy(res_str, str, RELEASE); // �� �̿��� ��� 5��° ���ڿ� ������ �κ������� ������ ����
		res_str[5] = '\0';
		strncat(res_str, star, len - RELEASE); // 5��° ���Ŀ� ������ ���̴� star ������ ����
	}
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res_str);
	return 0;
}
// strcpy ����
// strcpy ��ġ

		
	
