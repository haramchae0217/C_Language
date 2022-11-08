#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int *sum(int a, int b);
int add(int n);

int main() {

  // 실습 -1
  // int *resp;
  // resp = sum(10,20);
  // printf("두 정수의 합  : %d\n", *resp);

  // 실습 -2
  // int n;
  // int sum = 0;
  // printf("Input N : ");
  // scanf("%d",&n);

  // for(int i = 1; i <= n; i++) {
  //   sum += i;
  //   printf("%d ", sum);
  // }

  // 실습 -3
  int N;
  printf("Input N : ");
  scanf("%d", &N);

  for(int i = 1; i <= N; i++) {
    printf("%d ", add(i));
  }

  return 0;
}

int add(int n) {
  static int num;
  
  num += n;

  return num;
}

int *sum(int a, int b) {
  static int res;
  // 주소를 리턴하기 때문에 res를 지역변수로 지정하면 매우 위험 따라서 static 지역변수로 지정해준다.
  res = a + b;

  return &res;
}