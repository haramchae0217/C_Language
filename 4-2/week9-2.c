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
    // char str[80];
    // printf("공백이 포함된 문자열 입력 : ");
    // fgets(str, sizeof(str), stdin);
    // printf("입력된 문자열은 %s입니다.\n", str);

    // gets = 배열의 크기가 n이라면 n-1까지 담을 수 있다. 마지막에 null문자(\0)를 삽입함.
    // fgets = 배열의 크기가 n이라면 n-2까지 담을 수 있다. 마지막에 개행문자(\n)을 붙이고 뒤에 null문자(\0)를 삽입함.

    // ex6)
    // int age;
    // char name[20];

    // printf("나이 입력 : ");
    // scanf("%d", &age);

    // printf("이름 입력 : ");
    // gets(name);
    // printf("나이 : %d, 이름 : %s\n", age, name);

    // 나이에 17을 입력하고 엔터를 누를때 버퍼에는 17과 \n이 같이 저장
    // scanf에서는 \n 앞까지만 출력하기에 17만 출력하고 
    // gets에서 입력 받아야하지만 버퍼에 \n이 남아있어 
    // \n을 입력 받았다고 생각하고 
    // 개행문자를 출력하고 프로그램 종료

    // ex7)
    // char str[80] = "apple juice";
    // char *ps = "banana";

    // puts(str); // str에 있는 apple juice를 출력하고 줄바꿈
    // fputs(ps, stdout); // banana만 출력
    // puts("milk"); // banana에 이어 milk출력

    // ex8)
    // char str1[80] = "strawberry";
    // char str2[80] = "apple";
    // char *ps1 = "banana";
    // char *ps2 = "str2";

    // printf("최초 문자열 : %s\n", str1);
    // strcpy(str1, str2);
    // printf("바뀐 문자열 : %s\n", str1);

    // strcpy(str1,ps1);
    // printf("바뀐 문자열 : %s\n", str1);

    // strcpy(str1,ps2);
    // printf("바뀐 문자열 : %s\n", str1);

    // strcpy(str1, "banana");
    // printf("바뀐 문자열 : %s\n", str1);

    // ex9)
    // char str[20] = "mango tree";
    // strncpy(str, "apple-pie", 5); // apple-pie에서 5문자만 복사
    // printf("%s\n", str);

    // ex10)
    // char str[80] = "straw";
    // strcat(str, "berry");
    // printf("%s\n", str);
    // strncat(str,"piece", 3);
    // printf("%s\n", str);

    // ex11)
    // char str1[80], str2[80];
    // char *resp;

    // printf("2개의 과일 이름 입력 : ");
    // scanf("%s%s",str1,str2);
    // if(strlen(str1)> strlen(str2))
    //     resp = str1;
    // else
    //     resp = str2;
    // printf("이름이 긴 과일은 : %s\n", resp);

    // ex12)
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름 : ");
    if(strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else 
        printf("%s\n", str2);

    return 0;
}