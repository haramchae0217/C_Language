#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    // ex1)
    // char small, cap = 'G';

    // if((cap>='A') && (cap <= 'Z')) {
    //     small = cap + ('a' - 'A');
    // }

    // printf("대문자 : %c %c",cap,'\n');
    // printf("소문자 : %c\n",small);

    // ex2)
    // char ch1 = getc(stdin);
    // char ch2 = getchar();

    // printf("%c \n", ch1);

    // ex3)
    int res;
    char ch;

    while(1) {
        res = scanf("%c",&ch);
        if(res == -1) break;
        printf("%d ", ch);
    }

    return 0;
}