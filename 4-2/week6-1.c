#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    int lotto[6] = {0,};

    srand( time(NULL));

    for(int i = 0; i < (sizeof(lotto) / 4); i++) {
        lotto[i] = rand() % 45 + 1;
    }

    for(int i = 0; i < (sizeof(lotto) / 4); i++) {
        printf("%d\t", lotto[i]);
    }

    return 0;
}