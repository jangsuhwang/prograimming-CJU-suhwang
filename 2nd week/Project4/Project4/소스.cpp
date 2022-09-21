#include <stdio.h>

#define BMILOW 20				//120p 도전실전예제

#define BMIHIGH 25

#define CM2M 0.01

int main(void)

{

	double height = 0.0, weight = 0.0, bmi = 0.0;

	printf("input info (weight,height):");

	scanf_s("%lf%lf", &weight, &height);

	bmi = weight / ((height * CM2M) * (height * CM2M));

	printf("BMI result : %.4lf\n", bmi);

	printf("your status :");

	((bmi > BMILOW) && (bmi < BMIHIGH)) ? printf("Normal\n") : printf("Need to diet or Gain Weight\n");

	return 0;

}