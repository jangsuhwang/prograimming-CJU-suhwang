#include <stdio.h>

#define BMILOW 20				// ���� BMI 20 ����

#define BMIHIGH 25              // �ְ� BMI 25 ����

#define CM2M 0.01               // 1M=100cm ����

int main(void)

{

	double height = 0.0, weight = 0.0, bmi = 0.0;  // Double �� ���� �ʱⰪ ����//

	printf("input info (weight,height):");   //  ������,Ű �Է� �ȳ� �޽��� ���

	scanf_s("%lf%lf", &weight, &height); // ���� �Է� ������,Ű �Է��ϱ� ���� ��ȯ ���� %lf ���

	bmi = weight / ((height * CM2M) * (height * CM2M)); // bmi ����

	printf("BMI result : %.4lf\n", bmi);  //BMI ����� �ȳ� �޽���

	printf("your status :"); // ���� ���

	((bmi > BMILOW) && (bmi < BMIHIGH)) ? printf("Normal\n") : printf("Need to diet or Gain Weight\n"); //bmi�� BMILOW���� ũ�� BMIHIGH���� ������ normal �׷��� ������ �Ĵ� �����̳� ü�������� �ʿ� ���

	return 0;

}