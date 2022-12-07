#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4101)

#include <stdio.h>
// #include "week15-2sub.c"
#include "week15-2input.c"
#include "week15-2average.c"

#define SUM(a,b) ((a) + (b))
#define MUL(a,b) ((a) * (b))

#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x ## y)

#define VER 7
#define BIT16

#pragma pack(push, 1)
typedef struct {
  char ch;
  int in;
} Sample1;

#pragma pack(pop)
typedef struct {
  char ch;
  int in;
} Sample2;

// void input_data(int *, int *);
// double average(int, int);

int input_data(void);
double average(void);
void print_data(double);

int count = 0;
static int total = 0;

int main() {

  // 실습 -1
  // int a = 10, b = 20;
  // int x = 30, y = 40;
  // int res;

  // printf("a + b = %d\n", SUM(a, b));
  // printf("x + y = %d\n", SUM(x, y));
  // res = 30 / MUL(2, 5); // MUL(2, 5)가 먼저 실행
  // printf("res : %d\n", res);

  // 실습 -2
  // int a1, a2;

  // NAME_CAT(a, 1) = 10;
  // NAME_CAT(a, 2) = 20;
  // PRINT_EXPR(a1 + a2);
  // PRINT_EXPR(a2 - a1);

  // 실습 -3
  // int max;

  // #if VER >= 6
  //   printf("버전 %d 입니다.\n", VER);
  // #endif

  // #ifdef BIT16
  //   max = 32767;
  // #else
  //   max = 2147483647;
  // #endif

  //   printf("int형 변수의 최댓값 : %d\n", max);

  // 실습 -4
  // printf("Sample1 구조체의 크기 : %dByte\n", sizeof(Sample1));
  // printf("Sample2 구조체의 크기 : %dByte\n", sizeof(Sample2));

  // 실습 -5
  // int a, b;
  // double avg;

  // input_data(&a, &b);
  // avg = average(a,b);
  // printf("%d와 %d의 평균 : %.1f\n", a, b, avg);

  // 실습 -6
  double avg;

  total = input_data();
  avg = average();
  print_data(avg);

  // 실습 -7

  return 0;
}

void print_data(double avg) {
  printf("입력한 양수의 개수 : %d\n", count);
  printf("전체 합과 평균 : %d, %.1f\n", total, avg);
}