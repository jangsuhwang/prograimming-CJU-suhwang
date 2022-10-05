#include<stdio.h>

int ADD(int x, int y); //프로콜타입 함수 선언 3~6행//
int SUB(int x, int y);
int MUL(int x, int y);
int DIV(int x, int y);



int main()
{
        int nA = 0; 
        int nB = 0;
        int E = 0;
        char choper;
        printf("input your arithmetic operation : \n");
        scanf_s("%d %c %d", &nA, &choper, 1, &nB);
        switch (choper)
        {
        case '+':
        {
            E = ADD(nA, nB); //함수 호출//
            break;
        }
        case '-':
        {
            E = SUB(nA, nB); //함수 호출//
            break;
        }
        case '*':
        {
            E = MUL(nA, nB); //함수 호출//
            break;
        }
        case '/':
        {
            E = DIV(nA, nB);; //함수 호출//
            break;
        }
        default:
        {
            printf("error");
            break;
        }


        }
        printf("결과값: %d",E);
        return 0;
    }
int ADD(int x, int y)    // 51행~73행 함수 정의//
{
    int res;
    res = x + y; //연산값 변수 저장//
    return res;
    }
int SUB(int x, int y)
{
    int res;
    res = x - y;
    return res;
}
int MUL(int x, int y)
{
    int res;
    res = x * y;
    return res;
}
int DIV(int x, int y)
{
    int res;
    res = x / y;
    return res;
}

   
