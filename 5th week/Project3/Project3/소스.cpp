#include<stdio.h>

int ADD(int x, int y); //������Ÿ�� �Լ� ���� 3~6��//
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
            E = ADD(nA, nB); //�Լ� ȣ��//
            break;
        }
        case '-':
        {
            E = SUB(nA, nB); //�Լ� ȣ��//
            break;
        }
        case '*':
        {
            E = MUL(nA, nB); //�Լ� ȣ��//
            break;
        }
        case '/':
        {
            E = DIV(nA, nB);; //�Լ� ȣ��//
            break;
        }
        default:
        {
            printf("error");
            break;
        }


        }
        printf("�����: %d",E);
        return 0;
    }
int ADD(int x, int y)    // 51��~73�� �Լ� ����//
{
    int res;
    res = x + y; //���갪 ���� ����//
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

   
