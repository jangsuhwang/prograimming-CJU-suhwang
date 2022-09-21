#include <stdio.h>

/*int main(void)
{
    int a = 20;
    int b = 0;

    if (a > 10)
    {
        b = a;
    }
    printf("a:%d, b:%d,\n", a, b);
        return 0;
}*/

int main(void)
{
    int a = 0, b = 0;

    if (a > 0)
        b = 1;
    else if (a == 0)
        b = 2;
    else
        b = 3;

        printf("b :%d\n", b);

        return 0;

}