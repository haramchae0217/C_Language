#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define PersonNum 3
#define NameArrSize 30

void swap_ptr(char **ppa, char **ppb);
void print_str(char **pps, int cnt);
void print_ary(int (*)[4]);
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

double opFunc(double (*fs)(double, double));
double Minus(double a, double b);
double Divide(double a, double b); 

void GetNames(char(*names)[NameArrSize], int personNum) {
  printf("%d명의 이름을 입력 : \n", personNum);
  for(int i = 0; i < personNum; i++) {
    scanf(" %[^\n]s", names[i]);
  }
}

void ChangeNames(char(*orgNameArr)[NameArrSize], char(*changedNameArr)[NameArrSize], int personNum) {
  memcpy(changedNameArr, orgNameArr, personNum * NameArrSize);
  for(int i = 0; i < PersonNum; i++) {
    int nameLen = strlen(changedNameArr[i]);
    for(int j = 0; j < nameLen; j++) {
      if(isupper(changedNameArr[i][j])) {
        changedNameArr[i][j] = tolower(changedNameArr[i][j]);
      } else {
        changedNameArr[i][j] = toupper(changedNameArr[i][j]);
      }
    }
  }
}

void PrintNames(const char(*nameArr)[NameArrSize], int personNum) {
  for(int i = 0; i < personNum; i++) {
    printf("%s \n", nameArr[i]);
  }
}

char* FindLongestName(char(*nameArr)[NameArrSize], int personNum) {
  int longestLen = 0, longestNameIdx;
  for(int i = 0; i < personNum; i++) {
    int nameLen = strlen(nameArr[i]);
    if(nameLen > longestLen) {
      longestLen = nameLen;
      longestNameIdx = i;
    }
  }
  return nameArr[longestNameIdx];
}

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

  // 실습 -4
  // int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
  // int (*pa)[4];
  // int i, j;

  // pa = ary;
  // for(i = 0; i < 3; i++) {
  //   for(j = 0; j < 4; j++) {
  //     printf("%5d", pa[i][j]);
  //   }
  //   printf("\n");
  // }

  // 실습 -5
  // int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
  // print_ary(ary);

  // 실습 -6
  // int (*fp)(int, int);
  // int res;

  // fp = sum;
  // res = fp(10,20);
  // printf("result : %d\n",res);

  // 실습 -7
  // int sel;

  // printf("01 두 정수의 합\n");
  // printf("02 두 정수의 곱\n");
  // printf("03 두 정수 중에서 큰 값 계산\n");
  // printf("원하는 연산을 선택하세요 : ");
  // scanf("%d", &sel);

  // switch(sel) {
  //   case 1: func(sum); break;
  //   case 2: func(mul); break;
  //   case 3: func(max); break;
  //   default:  printf("올바르지 않은 선택입니다.");
  // }

  // 실습 -8
  // int a = 10;
  // double b = 3.5;
  // void *vp;

  // vp = &a;
  // printf("a : %d\n", *(int *)vp);

  // vp = &b;
  // printf("b : %.1f\n", *(double *)vp);

  // 실습 -9
  // int op;

  // printf("Operator? (Minus : 0, Divide : 1) : \n");
  // scanf("%d", &op);

  // (op) ? printf("Result : %f \n", opFunc(Divide) ) : printf("Result : %f \n", opFunc(Minus)); 

  // 실습 -10
  char personNames[PersonNum][NameArrSize];
  GetNames(personNames,PersonNum);
  
  char changeNameArr[PersonNum][NameArrSize];
  ChangeNames(personNames, changeNameArr, PersonNum);

  printf("\n%s \n", "입력된 이름들 : ");
  PrintNames(personNames, PersonNum);

  printf("\n%s \n", "수정된 이름들 : ");
  PrintNames(changeNameArr, PersonNum);

  char* longestName = FindLongestName(changeNameArr, PersonNum);
  printf("\n가장 긴 이름과 길이 : \n%s, %lu자(공백 포함) \n", longestName, strlen(longestName));

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

void print_ary(int (*pa)[4]) {
  int i, j;
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 4; j++) {
      printf("%5d", pa[i][j]);
    }
    printf("\n");
  }
}

void func(int (*fp)(int, int)) {
  int a, b;
  int res;

  printf("두 정수의 값을 입력하세요 : ");
  scanf("%d %d", &a, &b);
  res = fp(a,b);
  printf("결과값은 : %d\n",res);
}

int sum(int a, int b) {
  return (a + b);
}

int mul(int a, int b) {
  return (a * b);
}

int max(int a, int b) {
  if(a > b) {
    return a;
  } else {
    return b;
  }
}

double opFunc(double (*fs)(double, double)) {
  printf("Input two nums : ");
  double a, b;
  
  scanf("%lf %lf", &a, &b);
  return fs(a, b);
}

double Minus(double a, double b) {
  return (a - b);
}

double Divide(double a, double b) {
  if ( b!= 0) {
    return (a / b);
  } else {
    return 0;
  }
}