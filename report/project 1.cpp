#include <stdio.h>
#define PWROOM 10

// not_matched �Լ� ����
void not_matched(int x ,int y,int z)
{
    printf("��not matched, retry..��");
    printf("\n %d ��° inputnum[i] = %d // ppw = %d", x, y, z);
}
// nor_termiation �Լ� ����
void nor_termiation()
{
    printf("��normal termination..��");
}

int main(void)
{
    // ��й�ȣ ������ �ý��� �迭�� ����
    int passward[30] = { 2, 0, 1, 9, 0, 1, 0, 7, 5, 8 };

    // �Է¹޴� ��й�ȣ �� ���� �� ������ ���� 
    int inputnum[30];
    int* ppw;
    ppw = &passward[0];
    int count = 0;

    // �ý��ۿ� ��й�ȣ ���� �Է¹޴� ��й�ȣ ���̶� ������ ���Ͽ� ��й�ȣ�� ������ nor_termiation �Լ� ȣ�� Ʋ���� not matched �Լ� ȣ��
    //count==PWROOM �ɶ����� w�ݺ�
    while (count <= PWROOM-1) {
        for (int j = 0; j <= PWROOM - 1; j++)
        {
            printf("input your pw please. :\n");
            scanf_s("%d", &inputnum[j]);
       
        }
        for (int i = 0; i <= PWROOM - 1; i++)
        {
            if (inputnum[i] == *ppw)
            {
                // �ý��� ��й�ȣ�� ���ڰ� ������ count++
                count = count + 1;
            }
            else
            {
                not_matched(i + 1, inputnum[i], *ppw);
              

            }
            *ppw++;
        }
        //count==10�̸� nor_termiation()�Լ� ȣ�� �� break
        if (count == 10)
        {
            nor_termiation();
            break;
        }
        ppw = &passward[0];
        count = 0;
        printf("\n,\n,\n");
    }

    return 0;
}

