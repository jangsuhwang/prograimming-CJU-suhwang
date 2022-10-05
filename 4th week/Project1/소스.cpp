#include <stdio.h>
#define MAXCHESIZE 100
#define MICHESIZE 90

int main(void) {

    int chest = 0;
    char size;

    printf("가슴둘레를 입력해주세요. \n");
    scanf_s("%d", &chest);

    if (chest <= MICHESIZE) {
        size = 'S';
    }
    else if ((MICHESIZE < chest) && (chest <= MAXCHESIZE)) {
        size = 'M';
    }
    else {
        size = 'L';
    }

    printf("your size is %c", size);
    return 0;
}