#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    // int lotto[6] = {0,};

    // srand( time(NULL));

    // for(int i = 0; i < (sizeof(lotto) / 4); i++) {
    //     lotto[i] = rand() % 45 + 1;
    // }

    // for(int i = 0; i < (sizeof(lotto) / 4); i++) {
    //     printf("%d\t", lotto[i]);
    // }

    int a = 1, b = 2, c = 3;

    printf("value a = %u, b = %u, c = %u\n", a, b, c);
    printf("10진수 address a = %u, b = %u, c = %u\n", &a, &b, &c);
    printf("16진수 address a = %p, b = %p, c = %p\n", &a, &b, &c);

    return 0;
}