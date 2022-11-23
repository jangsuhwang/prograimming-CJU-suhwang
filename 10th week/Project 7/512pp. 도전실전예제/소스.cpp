#include <stdio.h>
#include <stdlib.h>
#define ACUT 90
#define BCUT 80
#define CCUT 70
#define STUDENT 5

struct profile //����ü ����
{
    int stunum;
    char name[1000];
    int kor;
    int math;
    int eng;
};

int main(void)
{
    struct profile Student[5];// ����ü ����Ʈ ����

    for (int i = 0; i < STUDENT; i++)
    {
        printf("�й� : ");
        scanf_s("%d", &Student[i].stunum); //����ü �й� ����� ����

        printf("�̸�: ");
        scanf_s("%s", &Student[i].name, 1000); //����ü �̸� ����� ����

        printf("����, ����, ���� ���� : ");
        scanf_s("%d%d%d", &Student[i].kor, &Student[i].math, &Student[i].eng); //����ü �� ���� ���� ����� ����
    }
    int bignum; //���Ŀ� �ʿ��� ����
    int total[5];//������ ������ ����
    float aver[5];//����� ������ ����
    char grade[5];//���� ���ڸ� ������ ����

    for (int i = 0; i < STUDENT; i++)//�� �л��� ���� ������ �Է��ϱ����� for�� ���
    {
        total[i] = (Student[i].kor) + (Student[i].math) + (Student[i].eng); // ���� ���� �� ����
        aver[i] = total[i] / 3; // ��հ�갪 ��� ������ ����

        if (aver[i] >= ACUT) // 'A' ���غ��� ����� ������ 
        {
            grade[i] = 'A'; // 'A'���
        }
        else if (aver[i] >= BCUT) // 'A' ���غ��ٴ� ������ 'B' ���غ��� ������
        {
            grade[i] = 'B'; // 'B'���
        }
        else if (aver[i] >= CCUT)//'B' ���غ��ٴ� ������ 'C' ���غ��� ������
        {
            grade[i] = 'C'; // C ���
        }
        else grade[i] = 'F'; // �� �� ���� F

        if (i == 0) printf("# ���� �� ������...\n");// ù��° �ݺ��� �������� ���

        printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%lf\t%c\n", Student[i].stunum, Student[i].name, Student[i].kor, Student[i].math, Student[i].eng, total[i], aver[i],grade[i]);// ����� for�� ���ึ�� ������ ���
    }

    int selectednum[STUDENT];//������ ���� �Ű� �迭

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

        if (i == 0) printf("# ���� �� ������...\n");

        printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%lf\t%c\n", Student[selectednum[i]].stunum, Student[selectednum[i]].name, Student[selectednum[i]].kor, Student[selectednum[i]].math, Student[selectednum[i]].eng, total[selectednum[i]], aver[selectednum[i]], grade[selectednum[i]]);

    }

    return 0;
}