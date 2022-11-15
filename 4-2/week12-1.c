#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define PersonNum 3
#define NameArrSize 30

int main() {

  // 실습 -1
  // char personNames[PersonNum][NameArrSize];
  // char namesCpy[PersonNum][NameArrSize];
  
  // printf("%s \n","세 명의 이름을 입력 : \n");
  // for(int i = 0; i < PersonNum; i++) {
  //   scanf(" %[^\n]s",personNames[i]);
  // }

  // for(int i = 0; i < PersonNum; i++) {
  //   strcpy(namesCpy[i], personNames[i]);
  // }

  // int longestLen = 0, longestNameIdx = 0;
  // for(int i = 0; i < PersonNum; i++) {
  //   int nameLen = strlen(namesCpy[i]);
  //   if(nameLen > longestLen) {
  //     longestLen = nameLen;
  //     longestNameIdx = i;
  //   }
  //   for (int j = 0; j < nameLen; j++) {
  //     if(isupper(namesCpy[i][j])) {
  //       namesCpy[i][j] = tolower(namesCpy[i][j]);
  //     } else {
  //       namesCpy[i][j] = toupper(namesCpy[i][j]);
  //     }
  //   }
  // }

  // printf("\n%s\n","수정된 이름 : ");
  // for(int i = 0; i < PersonNum; i++) {
  //   printf("%s \n", namesCpy[i]);
  // }

  // printf("가장 긴 이름과 길이 : %s, %d자(공백포함) \n", namesCpy[longestNameIdx], longestLen);

  // 실습 -2
  

  return 0;
}
