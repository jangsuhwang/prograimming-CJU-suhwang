#include <stdio.h>
#include <stdlib.h>
#define ACUT 90
#define BCUT 80
#define CCUT 70
#define STUDENT 5

struct profile //구조체 선언
{
    int stunum;
    char name[1000];
    int kor;
    int math;
    int eng;
};

int main(void)
{
    struct profile Student[5];// 구조체 리스트 선언

    for (int i = 0; i < STUDENT; i++)
    {
        printf("학번 : ");
        scanf_s("%d", &Student[i].stunum); //구조체 학번 멤버에 저장

        printf("이름: ");
        scanf_s("%s", &Student[i].name, 1000); //구조체 이름 멤버에 저장

        printf("국어, 영어, 수학 점수 : ");
        scanf_s("%d%d%d", &Student[i].kor, &Student[i].math, &Student[i].eng); //구조체 각 과목별 성적 멤버에 저장
    }
    int bignum; //정렬에 필요한 변수
    int total[5];//총점을 저장할 변수
    float aver[5];//평균을 저장할 변수
    char grade[5];//성적 문자를 저장할 변수

    for (int i = 0; i < STUDENT; i++)//각 학생별 성적 정보를 입력하기위해 for문 사용
    {
        total[i] = (Student[i].kor) + (Student[i].math) + (Student[i].eng); // 총점 연산 값 대입
        aver[i] = total[i] / 3; // 평균계산값 평균 변수에 대입

        if (aver[i] >= ACUT) // 'A' 기준보다 평균이 높으면 
        {
            grade[i] = 'A'; // 'A'출력
        }
        else if (aver[i] >= BCUT) // 'A' 기준보다는 낮지만 'B' 기준보다 높으면
        {
            grade[i] = 'B'; // 'B'출력
        }
        else if (aver[i] >= CCUT)//'B' 기준보다는 낮지만 'C' 기준보다 높으면
        {
            grade[i] = 'C'; // C 출력
        }
        else grade[i] = 'F'; // 그 외 점수 F

        if (i == 0) printf("# 정렬 전 데이터...\n");// 첫번째 반복때 정보문구 출력

        printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%lf\t%c\n", Student[i].stunum, Student[i].name, Student[i].kor, Student[i].math, Student[i].eng, total[i], aver[i],grade[i]);// 저장된 for문 시행마다 변수값 출력
    }

    int selectednum[STUDENT];//정렬을 위한 매개 배열

    int check;

    for (int i = 0; i < STUDENT; i++)
    {
        bignum = 0;
        for (int j = 0; j < STUDENT; j++)
        {
            check = 0;
            for (int k = 0; k < STUDENT; k++)
            {
                if (j == selectednum[k])
                {
                    check = 1;
                    break;
                }
            }

            if (check == 0)
            {
                if (total[j] > bignum)
                {
                    bignum = total[j];
                    selectednum[i] = j;
                }
            }

        }

        if (i == 0) printf("# 정렬 후 데이터...\n");

        printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%lf\t%c\n", Student[selectednum[i]].stunum, Student[selectednum[i]].name, Student[selectednum[i]].kor, Student[selectednum[i]].math, Student[selectednum[i]].eng, total[selectednum[i]], aver[selectednum[i]], grade[selectednum[i]]);

    }

    return 0;
}