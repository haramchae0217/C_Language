#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

int main() {

    // 포인터 예제 1

    // int a; // 일반 변수 선언
    // int *pa; // 포인터 선언

    // pa = &a; // 포인터에 a의 주소 대입
    // *pa = 10; // 포인터로 변수 a주소에 10을 저장

    // printf("포인터로 a값 출력 : %d\n", *pa); // pa가 가리키는 번지의 값을 읽겠다.
    // printf("변수명으로 a값 출력 : %d\n", a); // 변수 a값 출력.

    // 포인터 예제 2

    // int a = 10, b = 15, total;
    // double avg;
    // int *pa, *pb;
    // int *pt = &total;
    // double *pq = &avg;

    // pa = &a;
    // pb = &b;

    // *pt = *pa + *pb;
    // *pq = *pt / 2.0;

    // printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    // printf("두 정수의 합 : %d\n", *pt);
    // printf("두 정수의 평균 : %.1lf\n", *pq);

    // 포인터 예제 3

    int a = 10, b = 20;
    const int *pa = &a; // 포인터 pa는 변수 a를 가리킨다.

    printf("변수 a의 값 : %d\n", *pa); // 포인터를 간접 참조하여 a출력
    pa = &b; // 포인터가 변수 b를 가리키게 한다.
    printf("변수 b의 값 : %d\n", *pa); // 포인터를 간접 참조하여 b값 출력
    pa = &a; // 포인터가 다시 변수 a를 가리킨다.
    a = 20; // a를 직접 참조하여 값을 바꾼다.
    printf("변수 a의 값 : %d\n", *pa); // 포인터로 간접 참조하여 바뀐 값 출력

    return 0;
}