#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    // ex1)
    // printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    // printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    // printf("첫 번째 문자 : %c\n", *"apple");
    // printf("두 번째 문자 : %c\n", *("apple" + 1));
    // printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

    // ex2)
    // char *dessert = "apple";

    // printf("오늘 후식은 %s입니다.\n", dessert);
    // dessert = "banana";
    // printf("내일 후식은 %s입니다.\n", dessert);

    // ex3)
    // char str[80];

    // printf("문자열 입력 : ");
    // scanf("%s", str); // 배열은 이름이 곧 주소기 때문에 &연산자가 없어도 됨.
    // printf("첫 번째 단어 : %s\n", str);
    // scanf("%s",str);
    // printf("버퍼에 남아있는 두 번째 단어 : %s\n", str);

    // char name[100];
    // scanf("%[^\n]s", name);

    // ex4)
    // char str[80];
    // printf("공백이 포함된 문자열 입력 : ");
    // gets(str);
    // printf("입력한 문자열은 %s입니다.",str);

    // ex5)
    char str[80];
    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("입력된 문자열은 %s입니다.\n", str);

    // gets = 배열의 크기가 n이라면 n-1까지 담을 수 있다. 마지막에 null문자(\0)를 삽입함.
    // fgets = 배열의 크기가 n이라면 n-2까지 담을 수 있다. 마지막에 개행문자(\n)을 붙이고 뒤에 null문자(\0)를 삽입함.

    return 0;
}