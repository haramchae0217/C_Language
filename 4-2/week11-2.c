#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define STU_NUM 2
#define SUB_NUM 3

int main() {

  // 실습 -1
  // char subName[3][4] = {
  //   {'K','O','R','\0'},
  //   {'E','N','G','\0'},
  //   {'M','A','T','\0'}
  // };
  // double score[2][3];
  // double total;
  // double avg;
  // double maxScore;
  // int i,j;

  // for(i = 0; i < STU_NUM; i++) {
  //   printf("%d번째 학생의 과목 점수 입력(국,영,수) : ",i+1);
  //   for(j = 0; j < SUB_NUM; j++) {
  //     scanf("%lf", &score[i][j]);
  //   }
  // }

  // for(i = 0; i < STU_NUM; i++) {
  //   total = 0;
  //   for(j = 0; j < SUB_NUM; j++) {
  //     total += score[i][j];
  //   }
  //   avg = total / SUB_NUM;
  //   printf("%d번째 학생의 총점 : %.2lf, 평균 : %.2lf\n", i + 1, total, avg);
  // }

  // for(i = 0; i < SUB_NUM; i++) {
  //   total = 0;
  //   maxScore = 0;
  //   for(j = 0; j < STU_NUM; j++) {
  //     total += score[j][i];
  //     if(maxScore < score[j][i]) {
  //       maxScore = score[j][i];
  //     }
  //   }
  //   avg = total / STU_NUM;
  //   printf("%s과목의 총점 : %.2lf, 평균 : %.2lf, 최고점수 : %.2lf\n", subName[i], total, avg, maxScore);
  // }

  // 실습 -2
  // 2차원 문자 배열은 배열을 가리키는 포인터(배열포인터)로 핸들링할 수 있고,
  // 문자 포인터 배열은 2차원 포인터로 핸들링할 수 있다.

  // 만약 문자 포인터 배열을 보냈다면 2차원 포인터로 받아주고
  // 2차원 문자 배열을 넘겼다면 배열 포인터로 받아준다.

  // 문자 포인터 배열 ex) char* pary[5] -> 2차원 포인터 ex) char** p = pary;
  // 2차원 문자 배열 ex) char pary2[5][10] -> 배열 포인터 ex) char(*p)[10]

  char* pary[5]; // -> 2차원 포인터로 핸들링 가능
  // char pary2[5][10]; 2차원 문자 배열 -> 배열포인터로 핸들링 가능
  int i;

  pary[0] = "dog";
  pary[1] = "elephant";
  pary[2] = "hores";
  pary[3] = "tiger";
  pary[4] = "lion";

  for(i = 0; i < 5; i++) {
    printf("%s\n", pary[i]);
  }

  char** p = pary; // char* (*p) = pary; 같은 의미
  // 2차원 포인터가 가리킬 수 있는 대상은 포인터 배열, 주소가 저장된 배열,,
  for(i = 0; i < 5; i++) {
    printf("%s\n", p[i]);
  }

  return 0;
}