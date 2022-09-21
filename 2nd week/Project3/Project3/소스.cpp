#include <stdio.h>

#define NUM 3			        // 정의
#define EV 10

#define MIN 4.0





int main(void)

{

	int kor = 3, eng = 5, mat = 4; // 국어, 영어, 수학의 학점 초기화

	int credits = kor + eng + mat; // 전체 학점을 저장할 변수

	double kor1 = 3.8, eng1 = 4.4, mat1 = 3.9; // 소수점값이니까 double 사용 각 과목의 평점 초기화

	double Grade = (kor1 + eng1 + mat1) / ((double)(NUM)); // 전체학점 계산한 것을 과목 수로 나눠 평점 평균 계산

	int res = ((credits > EV) && (Grade > MIN)) ? 1 : 0; // 전체 학점이 10학점 이상이고 평점 평균이 4.0보다 크면 참이므로 결과는 1, 그렇지 않으면 결과는 0

	printf("Taehee's status(grade,score):(%d,%.4lf)\n", credits, Grade); // 전체 학점, 평균 성적 출력

	printf("Taehee's resurt status:(%d)\n", res); // 결과 출력

	return 0;

}