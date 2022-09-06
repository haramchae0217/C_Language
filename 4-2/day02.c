#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    // printf("My information: \n");
    // printf("\t이름 : %s \n", "Jeong Chan-Wook");
    // printf("\t나이 : %d세 \n", 25);
    // printf("\t키 : %.1lfCM \n", 178.6);
    // printf("\t성별 : %c", 'M');

    char * aa = NULL;
    int i = 10;
    aa = &i;

    printf("%p \n", aa);

    return 0;
}