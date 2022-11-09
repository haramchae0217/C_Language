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

  
  

  return 0;
}