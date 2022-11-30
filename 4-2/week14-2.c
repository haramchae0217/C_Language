#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

enum season {SPRING, SUMMER, FALL, WINTER};

struct Student {
  char name[50];
  double kor, eng, math;
  struct Student *pNext;
};

int main() {

  // 실습 -1
  // enum season ss;
  // char *pc = NULL;

  // ss = SPRING;

  // switch(ss) {
  //   case SPRING: pc = "inline"; break;
  //   case SUMMER: pc = "swimming"; break;
  //   case FALL: pc = "trip"; break;
  //   case WINTER: pc = "skiing"; break;
  // }

  // printf("나의 레저 활동 => %s\n",pc);

  // 실습 -2
  // struct Student stu, 
  //             *pNode = 0, *pHead = 0, *pCurrent = 0;

  // while(scanf("%lf %lf %lf %[^\n]s", &stu.kor, &stu.eng, &stu.math, stu.name) != EOF) {
  //   stu.pNext = 0;
  //   pNode = (struct Student*) malloc(sizeof(stu));
  //   *pNode = stu;

  //   if(pHead == NULL) {
  //     pHead = pNode;
  //   } else {
  //     pCurrent = pHead;

  //     while(pCurrent -> pNext != NULL) {
  //       pCurrent = pCurrent -> pNext;
  //     }
  //     pCurrent -> pNext = pNode;
  //   }
  // }

  // pCurrent = pHead;
  // double totalScore = 0, avg = 0.0;

  // while(pCurrent != NULL) {
  //   totalScore = pCurrent->kor + pCurrent->eng + pCurrent->math;
  //   avg = totalScore / 3.0;

  //   printf("이름 : %s 총점 : %.2f 평균 : %.2f\n", pCurrent -> name, totalScore, avg);

  //   pCurrent = pCurrent -> pNext;
  // }

  // pNode = pCurrent = pHead;
  // while(pCurrent != NULL) {
  //   pCurrent = pCurrent -> pNext;
  //   free(pNode);

  //   pNode = pCurrent;
  // }

  // 실습 -3
  FILE *fp;

  fp = fopen("a.txt", "r");
  if(fp == NULL) {
    printf("파일이 열리지 않았습니다.\n");
    return 1;
  }
  printf("파일이 열렸습니다.\n");
  fclose(fp);

  return 0;
}

