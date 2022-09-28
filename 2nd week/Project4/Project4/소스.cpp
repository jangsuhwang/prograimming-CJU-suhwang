#include <stdio.h>

#define BMILOW 20				// 최저 BMI 20 정의

#define BMIHIGH 25              // 최고 BMI 25 정의

#define CM2M 0.01               // 1M=100cm 정의

int main(void)

{

	double height = 0.0, weight = 0.0, bmi = 0.0;  // Double 각 변수 초기값 설정//

	printf("input info (weight,height):");   //  몸무게,키 입력 안내 메시지 출력

	scanf_s("%lf%lf", &weight, &height); // 실제 입력 몸무게,키 입력하기 위한 변환 문자 %lf 사용

	bmi = weight / ((height * CM2M) * (height * CM2M)); // bmi 연산

	printf("BMI result : %.4lf\n", bmi);  //BMI 결과는 안내 메시지

	printf("your status :"); // 상태 출력

	((bmi > BMILOW) && (bmi < BMIHIGH)) ? printf("Normal\n") : printf("Need to diet or Gain Weight\n"); //bmi가 BMILOW보다 크고 BMIHIGH보다 작으면 normal 그렇지 않으면 식단 조절이나 체중증가가 필요 출력

	return 0;

}