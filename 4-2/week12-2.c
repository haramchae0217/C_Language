#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void swap_ptr(char **ppa, char **ppb);
void print_str(char **pps, int cnt);

int main() {
  
  // 실습 -1
  // char *pa = "success";
  // char *pb = "failure";

  // printf("pa -> %s, pb -> %s\n", pa, pb);
  // swap_ptr(&pa, &pb);
  // printf("pa -> %s, pb -> %s\n", pa, pb);

  // 실습 -2
  // char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
  // int count;

  // count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
  // print_str(ptr_ary, count);

  // 실습 -3
  // int ary[5];

  // printf("ary의 값 : %u\t", ary);
  // printf("ary의 주소 : %u\n", &ary);
  // printf(" ary + 1 : %u\t", ary + 1);
  // printf("  &ary + 1 : %u\n", &ary + 1);

  

  return 0;
}

void swap_ptr(char **ppa, char **ppb) {
  char *pt;

  pt = *ppa;
  *ppa = *ppb;
  *ppb = pt;
}

void print_str(char **pps, int cnt) {
  for(int i = 0; i < cnt; i++) {
    printf("%s\n", pps[i]);
  }
}