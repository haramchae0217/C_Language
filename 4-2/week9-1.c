#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    char small, cap = 'G';

    if((cap>='A') && (cap <= 'Z')) {
        small = cap + ('a' - 'A');
    }

    printf("대문자 : %c %c",cap,'\n');
    printf("소문자 : %c",small);

    return 0;
}