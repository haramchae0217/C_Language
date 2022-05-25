#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define ARR_NUM 100
#pragma warning(disable: 6031)// scanf 경고 제거위해

// int IsPrimeNumber(const int num) {
//     int yes = 1;
//     for(int i=2; i<num; i++)
//         if(IsTheDivisor(i,num)){
//             yes = 0;
//             break;
//         }
    
//     return yes;
// }
// int GetPrimeNums(int num, int primeNums[]) {
//     int count=0;
//     for(int i=2; i<=num; i++){
//         if(IsPrimeNumber(i))
//             primeNums[count++] = i;
//     }
//     return count;
// }
// int IsTheDivisor(int candidateNum, int num) {
//     return !(num%candidateNum);
// }
// void PrintArrIfNot(int arr[], int count, int val){
//     for(int i=0; (arr[i] != val) && (i<count);)
//         printf("%d ",arr[i]);
//     printf("\n");
// }
// int GetSum(int arr[], int count) {
//     int sum=0;
//     for(int i=0; i<count; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

double avgScore(int score[], int count){
    double sum;
    for(int i=0; i<count; i++){
        sum += score[i];
    }
    return sum / count;
}

int maxScore(int score[], int count){
    int max = score[0];
    for(int i=1; i<count; i++){
        if (max < score[i]){
            max = score[i];
        }
    }
    return max;
}

int minScore(int score[], int count){
    int min = score[0];
    for(int i=1; i<count; i++){
        if (min > score[i]){
            min = score[i];
        }
    }
    return min;
}

int main() {
    // 실습 1.
    // N 이하 소수의 개수 및 합계 구하기
    // N은 입력 받는다.
    // N 이하의 양수에 대해 소수를 찾아 개수와 합계를 계산.
        // 소수 리스트와 함께 출력
    // 함수로 구현할 것
        // int IsPrimeNum(int num)
        // int GetPrimeNums(int num, int primeNums[])
        // int IsTheDivisor(int candidateNum, int num)
        // double GetSum(int arr[], int count)

    // while (1)
    // {
    //     int num;
    //     int primeNums[ARR_NUM] = {0,};
    //     int count=0;
    //     int sum=0;
    //     printf("Input your N(N > 1) : ");
    //     if (scanf("%d",&num) == EOF)
    //         break;

    //     if(num<2){
    //         printf("WrongInput!");
    //         continue;
    //     }

    //     count = GetPrimeNums(num,primeNums);
    //     sum = GetSum(primeNums,count);
    //     printf("Count : %d, Sum : %d\n",count,sum);
    //     printf("Prime nums : ");
    //     PrintArrIfNot(primeNums,ARR_NUM,0);
    // }

    // 실습 2.
    // 소인수 분해
    // 어떤 수를 소수의 곱으로만 나타낸 것
    // 2 이상의 정수만 가정
    // 방법
        // i : 2 ~ 어떤 수(N) 사이의 정수에 대해 반복
            // N % i == 0일 경우, i = 소인수
            // N /= i로 놓고 반복 (=> 몫을 N으로 재설정)
        // ii : 2 ~ sqrt(N) 사이의 정수에 대해 반복
            // N % i == 0일 경우, i = 소인수
            // N /= i로 놓고 반복 (=> 몫을 N으로 재설정)
            // 맨 마지막 나머지에 대한 처리 1이 아닐 경우 ==> 소수 ==> 출력
    
    // 실습 2-1.
    // int n;
    // int mok;
    
    // printf("Input your number : ");
    // scanf("%d",&n);

    // mok = n;
    // for(int i=2; i<=mok; i++){
    //     while (mok%i == 0)
    //     {
    //         printf("%d",i);
    //         mok /= i;
    //     }
    // }
    // printf("\n");

    // 실습 2-2.
    // int n;
    // int mok;
    
    // printf("Input your number : ");
    // scanf("%d",&n);

    // mok = n;
    // for(int i=2; i<=(int)sqrt(mok); i++){
    //     while (mok%i == 0)
    //     {
    //         printf("%d",i);
    //         mok /= i;
    //     }
    // }
    // if(mok>1){
    //     printf("%d",mok);
    // }
    // printf("\n");

    // 실습 3.
    // 과목 수 N : 사용자 입력 받음 N>3
    // 과목 점수 : 난수를 이용
    // 점수 범위 : 0 ~ 100점
    // 평균 점수 계산 : 
    // 최고, 최저 점수를 제외한 나머지 과목의 평균 점수
    // 과목 수가 2이하면 오류로 처리
    
    while (1) {
        int num;
        int scores[num-1];
        int count = 0;
    
        printf("Input Subject number (>=3) : ");
        scanf("%d",&num);
        if(num<3){
            printf("Wrong number! Input again...");  
        }

        srand(time(NULL));
        for(int i=0; i<num; i++){
            scores[i] = (rand()%99);
            count++;
            printf("%d ",scores[i]);
        }
        printf("\n");
        printf("Max : %d, Min : %d, Avg : %.1f\n",maxScore(scores,count),minScore(scores,count),avgScore(scores,count));
    }
    return 0;
}