#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

void my_gets(char *str, int size);

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
    // int res;
    // char ch;

    // while(1) {
    //     res = scanf("%c",&ch);
    //     if(res == EOF) break;
    //     printf("%d ", ch);
    // }

    // ex4)
    // char str[7];

    // my_gets(str,sizeof(str));
    // printf("입력한 문자열 : %s\n", str);

    // ex5)
    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();

    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c", num, grade);


    return 0;
}

void my_gets(char *str, int size) {

    char ch;
    int i = 0;

    while((ch = getchar()) != EOF && (ch != '\n') && (i < size - 1)) {
        str[i++] = ch;
    }
    str[i] = '\0';
}