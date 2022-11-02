#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void assign(void);

int main() {

  // 실습 -1
  // auto int a = 0; // auto없어도 가능

  // assign();
  // printf("main 함수 a : %d\n", a);

  // 실습 -2
  int a = 10, b = 20;
  printf("교환 전의 a와 b의 값 : %d, %d\n", a, b);
  {
    int temp;
    temp = a;
    a = b;
    b = temp;
  }
  printf("교환 후의 a와 b의 값 : %d, %d", a, b);

  return 0;
}

void assign(void) {
  int a;
  
  a = 10;
  printf("assign 함수 a : %d\n", a);
}