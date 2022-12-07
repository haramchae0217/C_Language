#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  double kor, math, eng;
};

struct Score {
  char name[50];
  double totalScore;
  int subNum;
};

int main() {

  // 실습 -1
  // FILE *fp;
  // int ary[10] = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10};
  // int i, res;

  // fp = fopen("a.txt", "wb");
  // for(i = 0; i < 10; i++) {
  //   fputc(ary[i],fp);
  // }
  // fclose(fp);

  // fp = fopen("a.txt", "rt");
  // while(1) {
  //   res = fgetc(fp);
  //   if(res == EOF) break;
  //   printf("%4d", res);
  // }
  // fclose(fp);

  // 실습 -2
  // FILE *fp;
  // char str[20];

  // fp = fopen("a.txt", "a+");
  // if(fp == NULL) {
  //   printf("파일을 만들지 못했습니다.\n");
  //   return 1;
  // }

  // while(1) {
  //   printf("과일 이름 : ");
  //   scanf("%s", str);
  //   if(strcmp(str, "end") == 0) {
  //     break;
  //   } else if(strcmp(str, "list") == 0) {
  //     fseek(fp,0,SEEK_SET);
  //     while(1) {
  //       fgets(str, sizeof(str), fp);
  //       if(feof(fp)) {
  //         break;
  //       }
  //       printf("%s",str);
  //     }
  //   } else {
  //     fprintf(fp,"%s\n", str);
  //   }
  // }
  // fclose(fp);

  // 실습 -3
  // FILE *ifp, *ofp;
  // char str[80];
  // char *res;

  // ifp = fopen("a.txt", "r");
  // if(ifp == NULL) {
  //   printf("입력 파일을 열지 못했습니다.\n");
  //   return 1;
  // }
  // ofp = fopen("b.txt", "w");
  // if(ofp == NULL) {
  //   printf("출력 파일을 열지 못했습니다.\n");
  //   return 1;
  // }

  // while(1) {
  //   res = fgets(str, sizeof(str), ifp);
  //   if(res == NULL) {
  //     break;
  //   }
  //   str[strlen(str) - 1] = '\0';
  //   fputs(str, ofp);
  //   fputs(" ", ofp);
  // }

  // fclose(ifp);
  // fclose(ofp);

  // 실습 -4
  // int age;
  // char name[20];

  // FILE *fp = fopen("a.txt", "r");

  // fscanf(fp, "%d", &age);
  // fgets(name, sizeof(name), fp);

  // printf("나이 : %d, 이름 : %s", age, name);

  // 실습 -5
  // FILE *afp, *bfp;
  // int num = 10;
  // int res;

  // afp = fopen("a.txt", "wt");
  // fprintf(afp, "%d", num);

  // bfp = fopen("b.txt", "wb");
  // fwrite(&num, sizeof(num), 1, bfp);

  // fclose(afp);
  // fclose(bfp);

  // bfp = fopen("b.txt", "rb");
  // fread(&res, sizeof(res), 1, bfp);
  // printf("%d", res);

  // fclose(bfp);
  
  return 0;
}