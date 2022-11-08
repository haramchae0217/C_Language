#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int *sum(int a, int b);

int main() {

  // 실습 -1
  // int *resp;
  // resp = sum(10,20);
  // printf("두 정수의 합  : %d\n", *resp);

  // 실습 -2
  int n;
  int sum = 0;
  printf("Input N : ");
  scanf("%d",&n);

  for(int i = 1; i <= n; i++) {
    sum += i;
    printf("%d ", sum);
  }

  return 0;
}

int *sum(int a, int b) {
  static int res;
  // 주소를 리턴하기 때문에 res를 지역변수로 지정하면 매우 위험 따라서 static 지역변수로 지정해준다.
  res = a + b;

  return &res;
}