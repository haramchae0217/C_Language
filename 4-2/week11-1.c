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
  // int N;
  // printf("Input N : ");
  // scanf("%d", &N);

  // for(int i = 1; i <= N; i++) {
  //   printf("%d ", add(i));
  // }

  // 실습 -4
  // int score[3][4]; // 3행 4열의 2차원 배열
  // int total;
  // double avg;
  // int i, j;

  // for(i = 0; i < 3; i++) {
  //   printf("4과목의 점수 입력 : ");
  //   for(j = 0; j < 4; j++) {
  //     scanf("%d", &score[i][j]);
  //   }
  // }

  // for(i = 0; i < 3; i++) {
  //   total = 0;
  //   for(j = 0; j < 4; j++) {
  //     total += score[i][j];
  //   }
  //   avg = total / 4.0;
  //   printf("총점 : %d, 평균 : %.2lf\n", total, avg);
  // }

  // 실습 -5
  // int num[3][4] = {
  //   {1, 2, 3, 4},
  //   {5, 6, 7, 8},
  //   {9, 10, 11, 12}
  // };
  // int i, j;
  
  // for(i = 0; i < 3; i++) {
  //   for (j = 0; j < 4; j++) {
  //     printf("%5d", num[i][j]);
  //   }
  //   printf("\n");
  // }

  // 실습 -6
  // char animal[5][20];
  // int i;
  // int count;

  // count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산
  // for(i = 0; i < count; i++) { // 행의 수만큼 반복
  //   scanf("%s", animal[0]);
  // }

  // for(i = 0; i < count; i++) {
  //   printf("%s, ",animal[i]); // 입력된 문자열 출력
  // }

  // 실습 -7
  int score[2][3][4] = {
    {{72,80,95,60}, {68,98,83,90}, {75,72,84,90}},
    {{66,85,90,88}, {95,92,88,95}, {43,72,56,75}}
  };
  int i,j,k;

  for(i = 0; i < 2; i++) {
    printf("%d반 점수...\n", i+1);
    for(j = 0; j < 3; j++) {
      for(k = 0; k < 4; k++) {
        printf("%5d", score[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
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