#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4101)

#include <stdio.h>

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
  printf("Sample1 구조체의 크기 : %dByte\n", sizeof(Sample1));
  printf("Sample2 구조체의 크기 : %dByte\n", sizeof(Sample2));

  return 0;
}