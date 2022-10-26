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
    // int num, grade;

    // printf("학번 입력 : ");
    // scanf("%d", &num);
    // getchar(); // 버퍼에 남아 있는 개행문자 제거

    // printf("학점 입력 : ");
    // grade = getchar();
    // printf("학번 : %d, 학점 : %c", num, grade);

    // ex6)
    // 사용자로 부터 '$' 문자를 입력할 때까지 최대 100개 이내의 문자들을 입력받아,
    // 문자열로 만들고, 이 중 아스키 코드 값이 가장 큰 문자를 찾아 코드 값과 함께 출력

    char str[101];
    char ch;
    char maxCh;
    int i = 0;
    
    while((ch = getchar()) != EOF && (ch!= '$') && (i < sizeof(str) - 1)) {
        str[i++] = ch;
    }
    str[i] = '\0';
    maxCh = str[0];

    for(int j = 1; j < (sizeof(str) - 1) && str[j] != '\0'; j++) {
        if(maxCh < str[j]) {
            maxCh = str[j];
        }
    }

    printf("입력한 문자열 : %s\n", str);
    printf("아스키 코드 값이 가장 큰 문자 : %c", maxCh);

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