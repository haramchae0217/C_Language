#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    // ex1)
    printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫 번째 문자 : %c\n", *"apple");
    printf("두 번째 문자 : %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

    // ex2)
    char *dessert = "apple";

    printf("오늘 후식은 %s입니다.\n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s입니다.\n", dessert);

    return 0;
}