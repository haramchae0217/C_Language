#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int  main() {
    char srcStr[100] = { 0, };

    printf("Input your strings: ");
    scanf("%[^\n]s", srcStr);

    const char* curChar = srcStr;

    int    alphaCnt[52] = { 0, }; // A: [0] ~ Z: [25], a: [26] ~ z: [51]

    while (*curChar != '\0') {
        // 문자열에 포함된 각 알파벳(대소문자 구분)을 배열의 해당 인덱스에 누적시키는 코드
        // 대문자(65 ~ 90)와 소문자(97 ~ 122)일때만 배열에 누적 시킬 것
        // 참고: ASCII codes: A - 65, Z - 90, a - 97, z - 122
        if(65 <= *curChar && *curChar <= 90) {
            alphaCnt[*curChar-65]++;
        } else if(97 <= *curChar && *curChar <= 122) {
            alphaCnt[*curChar-71]++;
        }

        curChar++;
    }

    printf("Original string: %s \n", srcStr);

    for (int i = 0; i < 52; i++)
        // 배열의 현재 카운트 값을 참고하여 0이 아닌 알파벳에 대해서만 출현 회수를 출력
        if (alphaCnt[i] != 0) {
            if (i <= 25) {
                printf("%c(%d번) ",i+65,alphaCnt[i]);
            } else {
                printf("%c(%d번) ",i+71,alphaCnt[i]);
            }
        }

    return 0;
}


