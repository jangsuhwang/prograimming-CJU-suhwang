#include <stdio.h>

#define NUM 3			        // ����
#define EV 10

#define MIN 4.0





int main(void)

{

	int kor = 3, eng = 5, mat = 4; // ����, ����, ������ ���� �ʱ�ȭ

	int credits = kor + eng + mat; // ��ü ������ ������ ����

	double kor1 = 3.8, eng1 = 4.4, mat1 = 3.9; // �Ҽ������̴ϱ� double ��� �� ������ ���� �ʱ�ȭ

	double Grade = (kor1 + eng1 + mat1) / ((double)(NUM)); // ��ü���� ����� ���� ���� ���� ���� ���� ��� ���

	int res = ((credits > EV) && (Grade > MIN)) ? 1 : 0; // ��ü ������ 10���� �̻��̰� ���� ����� 4.0���� ũ�� ���̹Ƿ� ����� 1, �׷��� ������ ����� 0

	printf("Taehee's status(grade,score):(%d,%.4lf)\n", credits, Grade); // ��ü ����, ��� ���� ���

	printf("Taehee's resurt status:(%d)\n", res); // ��� ���

	return 0;

}