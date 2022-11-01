#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int  main() {
    char srcStr[100] = { 0, };
    int  alphaCnt[52] = { 0, };
    const char* curChar = srcStr;

    printf("Input your strings: ");
    scanf("%[^\n]s", srcStr);

    while (*curChar != '\0') {
        if(65 <= *curChar && *curChar <= 90) {
            alphaCnt[*curChar-65]++;
        } else if(97 <= *curChar && *curChar <= 122) {
            alphaCnt[*curChar-71]++;
        }

        curChar++;
    }

    printf("Original string: %s \n", srcStr);

    for (int i = 0; i < 52; i++) {
        if (alphaCnt[i] != 0) {
            if (i <= 25) {
                printf("%c(%d번) ",i+65,alphaCnt[i]);
            } else {
                printf("%c(%d번) ",i+71,alphaCnt[i]);
            }
        }
    }
    
    return 0;
}


