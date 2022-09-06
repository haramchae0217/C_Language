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
    printf("\n");
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
    // while(1){
    //     int n;
    //     int randArr[ARR_SIZE];
        
    //     printf("Input N : ");
    //     if (scanf("%d",&n) == EOF)
    //         break;

    //     getRandNums(randArr, ARR_SIZE, MAX_RANGE);

    //     printf("Numbers : ");
    //     printARR(randArr, ARR_SIZE);

    //     int nearNums[2] = {MAX_RANGE -1, MAX_RANGE -1};
    //     int numCnt = getNearestNums(randArr, ARR_SIZE, n, nearNums);

    //     printf("Nearest num of %d is ",n);
    //     for(int i=0; i<numCnt; i++){
    //         printf("%d, ", nearNums[i]);
    //     }
    //     printf("\b\b \n");
    //     printf("------------------");
    // }

    // 실습 2.
    // 보수구하기
    // 2-1.
    // 8비트 숫자에 대해 1의 보수 및 2의 보수 구하기
    // 1의 보수 구한 후 + LSB + 1
    // 숫자는 scnaf함수를 통해 입력받을 것
    // 숫자는 난수를 통해 입력받을 것
    // 이진수 생성 0 or 1

    int a[8];
    int b1[8];
    int b2[8];
    int i, c=1;

    printf("Input (8bit 2진수) : ");
    for(int i=0; i<8; i++){
        scanf("%d",&a[i]);
        b1[i] = 1 - a[i];
    }

    i--;

    do{
        b2[i] = b1[i] + c;
        b2[i] = b2[i] % 2;
        c = b1[i] * c;
        i--;
    } while(i >= 0);

    i++;

    printf("Output : \n");
    printf("1의 보수 : ");
    for(int i=0; i<8; i++){
        printf("%d ",b1[i]);
    }
    printf("2의 보수 : ");
    for(int i=0; i<8; i++){
        printf("%d ",b2[i]);
    }

    return 0;
}