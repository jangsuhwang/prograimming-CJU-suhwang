#include <stdio.h>

#define NUM 3			        
#define EV 10

#define MIN 4.0





int main(void)

{

	int kor = 3, eng = 5, mat = 4;

	int credits = kor + eng + mat;

	double kor1 = 3.8, eng1 = 4.4, mat1 = 3.9;

	double Grade = (kor1 + eng1 + mat1) / ((double)(NUM));

	int res = ((credits > EV) && (Grade > MIN)) ? 1 : 0;

	printf("Taehee's status(grade,score):(%d,%.4lf)\n", credits, Grade);

	printf("Taehee's resurt status:(%d)\n", res);

	return 0;

}