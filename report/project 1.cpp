#include <stdio.h>
#define PWROOM 10

// not_matched 함수 정의
void not_matched(int x ,int y,int z)
{
    printf("“not matched, retry..”");
    printf("\n %d 번째 inputnum[i] = %d // ppw = %d", x, y, z);
}
// nor_termiation 함수 정의
void nor_termiation()
{
    printf("“normal termination..”");
}

int main(void)
{
    // 비밀번호 설정값 시스템 배열에 저장
    int passward[30] = { 2, 0, 1, 9, 0, 1, 0, 7, 5, 8 };

    // 입력받는 비밀번호 값 저장 및 포인터 지정 
    int inputnum[30];
    int* ppw;
    ppw = &passward[0];
    int count = 0;

    // 시스템에 비밀번호 값을 입력받는 비밀번호 값이랑 일일이 비교하여 비밀번호가 맞으면 nor_termiation 함수 호출 틀리면 not matched 함수 호출
    //count==PWROOM 될때까지 w반복
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
                // 시스템 비밀번호와 숫자가 맞으면 count++
                count = count + 1;
            }
            else
            {
                not_matched(i + 1, inputnum[i], *ppw);
              

            }
            *ppw++;
        }
        //count==10이면 nor_termiation()함수 호출 후 break
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

