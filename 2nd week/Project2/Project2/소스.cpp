#include <stdio.h>
int main(void)              

{

	char ch;                                      // ���ڸ� ������ ����


	printf("���� �Է�:\n");                 // �Է� �ȳ� �޼��� 

	scanf_s("%c", &ch);                          // ���� ch�� �� �Է�

	printf("���� �Է�:%c\n", ch);              // �����Է�: %cĭ�� ch�� ���

	printf("%c ������ �ƽ�Ű �ڵ� ���� :%d\n", ch, ch);

	return 0;

}