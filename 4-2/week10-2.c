#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void assign(void);
void assign10(void);
void assign20(void);

void auto_func(void);
void static_func(void);

int a;

int main() {

  // 실습 -1
  // auto int a = 0; // auto없어도 가능

  // assign();
  // printf("main 함수 a : %d\n", a);

  // 실습 -2
  // int a = 10, b = 20;
  // printf("교환 전의 a와 b의 값 : %d, %d\n", a, b);
  // {
  //   int temp;
  //   temp = a;
  //   a = b;
  //   b = temp;
  // }
  // printf("교환 후의 a와 b의 값 : %d, %d", a, b);

  // 실습 -3
  // printf("함수 호출 전의 a값 : %d\n", a);

  // assign10();
  // assign20();

  // printf("함수 호출 후의 a값 : %d\n", a);

  // 실습 -4
  // int i;
  // printf("일반 지역 변수를 사용한 함수...\n");
  // for(int i = 0; i < 3; i++) {
  //   auto_func();
  // }

  // printf("정적 지역 변수(static)를 사용한 함수...\n");
  // for(int i = 0; i < 3; i++) {
  //   static_func();
  // }

  // 실습 -5
  register int i;
  auto int sum = 0;
  for (i = 1; i <= 10000; i++) {
    sum += i;
  }
  printf("%d\n",sum);

  return 0;
}

void assign(void) {
  int a;
  
  a = 10;
  printf("assign 함수 a : %d\n", a);
}

void assign10(void) {
  a = 10;
}

void assign20(void) {
  int a;
  a = 20;
}

void auto_func(void) {
  auto int a = 0;
  a++;
  printf("%d\n",a);
}

void static_func(void) {
  static int a;
  a++;
  printf("%d\n",a);
}