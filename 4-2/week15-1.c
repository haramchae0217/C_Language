#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

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
  FILE *fp;
  char str[20];

  fp = fopen("a.txt", "a+");
  if(fp == NULL) {
    printf("파일을 만들지 못했습니다.\n");
    return 1;
  }

  while(1) {
    printf("과일 이름 : ");
    scanf("%s", str);
    if(strcmp(str, "end") == 0) {
      break;
    } else if(strcmp(str, "list") == 0) {
      fseek(fp,0,SEEK_SET);
      while(1) {
        fgets(str, sizeof(str), fp);
        if(feof(fp)) {
          break;
        }
        printf("%s",str);
      }
    } else {
      fprintf(fp,"%s\n", str);
    }
  }
  fclose(fp);

  return 0;
}