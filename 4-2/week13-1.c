#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
  // 실습 -1
  // int *pi;
  // double *pd;

  // pi = malloc(sizeof(int));
  // if(pi == NULL) {
  //   printf("# 메모리가 부족합니다.\n");
  //   exit(1);
  // }

  // pd = malloc(sizeof(double));

  // *pi = 10;
  // *pd = 3.4;

  // printf("정수형으로 사용 : %d\n", *pi);
  // printf("실수형으로 사용 : %.1f\n", *pd);

  // free(pi);
  // free(pd);

  // 실습 -2
  // int *pi;
  // int i, sum = 0;

  // pi = malloc(5 * sizeof(int));
  // if(pi == NULL) {
  //   printf("# 메모리가 부족합니다.\n");
  //   exit(1);
  // }

  // printf("다섯 명의 나이를 입력하세요 : ");
  // for(i = 0; i < 5; i++) {
  //   scanf("%d", &pi[i]);
  //   sum += pi[i];
  // }

  // printf("다섯 명의 평균 나이 : %.1f\n",(sum / 5.0));
  // free(pi);

  // 실습 -3
  int *pi;
  int size = 5;
  int count = 0;
  int num;
  int i;

  pi = calloc(size, sizeof(int));
  while(1) {
    printf("양수만 입력하세요 : ");
    scanf("%d", &num);
    if(num <= 0) break;
    if(count == size) {
      size += 5;
      pi = realloc(pi, size * sizeof(int));
    }
    pi[count++] = num;
  }
  for(i = 0; i < count; i++) {
    printf("%5d", pi[i]);
  }
  free(pi);

  return 0;
}