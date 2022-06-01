#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARR_SIZE 20
#define MAX_RANGE 50

int IsDuplicated(int randArr[], int to, int n){
    int yes = 0;
    for(int i=0; i < to; i++){
        if(n == randArr[i]){
            yes = 1;
            break;
        }
    }
    return yes;
}

int* getRandNums(int randArr[], int arrSize, int limit) {

    srand(time(NULL));
    int n;
    for(int i=0; i<arrSize;){
        n = rand()%(limit * 2 + 1) - 50;
        if(!IsDuplicated(randArr, i, n))
            randArr[i++] = n;
    }
    return randArr;
}

int printARR(int randArr[], int arrSize) {
    for(int i=0; i < arrSize; i++){
        printf("%d ",randArr[i]);
    }
    return 0;
}

int getNearestNums(int numArr[], int arrSize, int n, int nearestARR[]) {
    int nearestGap = MAX_RANGE * 2 + 1;
    int gapTmp, idx = 0;

    for(int i = 0; i<arrSize; i++){
        gapTmp = abs(n - numArr[i]);
        if(gapTmp < nearestGap){
            nearestGap = gapTmp;
            nearestARR[idx=0] = numArr[i];
            idx++;
        } else if (gapTmp == nearestGap){
            nearestGap = gapTmp;
            nearestARR[idx++] = numArr[i];
        }
    }
    return idx;
}

int main() {

    // 실습 1.
    // 정수 n의 가장 가까운 정수를 출력
    // -50 ~ 50 사이의 난수 배열 사용 rand()%101-50
    // n은 사용자 입력을 받음 : 음수 가능
    // 두 수의 차이 계산 : 절대값을 이용한 abs이용
    int n;
    int randArr[ARR_SIZE];
    
    printf("Input N : ");
    scanf("%d",&n);

    getRandNums(randArr, ARR_SIZE, MAX_RANGE);

    printf("Numbers : ");
    printARR(randArr, ARR_SIZE);
    printf("\n");

    int nearNums[2] = {MAX_RANGE -1, MAX_RANGE -1};
    int numCnt = getNearestNums(randArr, ARR_SIZE, n, nearNums);

    printf("Nearest num of %d is ",n);
    for(int i=0; i<numCnt; i++){
        printf("%d, ", nearNums[i]);
    }
    printf("\b\b \n");

}