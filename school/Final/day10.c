#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    // M 이하의 자연수 중 N의 배수의 합계 출력
    // while(1) {
    //     int num1, num2;
    //     int sum = 0;
    //     printf("Input M, N : ");
    //     if (scanf("%d %d", &num1, &num2) == EOF){
    //         break;
    //     }

    //     for(int i = 1; i <= num1; i++){
    //         if (i % num2 == 0) {
    //             sum += i;
    //             printf("%d + ",i);
    //         }
    //     }
    //     printf("\b\b= %d\n",sum);
    // }

    // 수열 1-2+3-4+5-6+7...에서  N번째 항까지 합계
    // int n;
    // int cnt = 1;
    // int sum = 0;
    // printf("N번째 입력 : ");
    // scanf("%d",&n);

    // for(int i = 1; i <= n; i++){
    //     if(cnt % 2 == 1){
    //         sum += i;
    //         cnt++;
    //         printf("%d - ",i);
    //     } else if (cnt % 2 == 0){
    //         sum -= i;
    //         cnt++;
    //         printf("%d + ",i);
    //     }
    // }
    // printf("\b\b= %d\n",sum);

    // 수열 1+2+4+7+11+16...에서 N번째 항까지 합계
    // int n;
    // int sum = 0;
    // printf("N번째 입력 : ");
    // scanf("%d",&n);

    // for(int i = 1, interval = 0, num = 1; i<=n; i++, interval++){
    //     num += interval;
    //     sum += num;
    //     printf("%d + ",num);
    // }
    // printf("\b\b= %d\n",sum);

    // 홀짝 게임

    // srand(time(NULL));
    // int n;

    // while (1)
    // {
    //     int random = rand()%2;
        
    //     printf("홀수(1) 또는 짝수(0)를 정하세요 : ");
    //     scanf("%d",&n);
    //     if (random == n){
    //         printf("맞았습니다.");
    //         break;
    //     }else{
    //         printf("틀렸습니다. 다시 ");
    //     }
    // }

    // 숫자 알아 맞추기 게임
    // 컴퓨터가 생성한 10 ~ 100 사이의 정수 알아맞추기
    // srand(time(NULL));
    // int n;
    // int random = (rand()%91) + 10;

    // while(1){
    //     printf("Your number(10 ~ 100) : ");
    //     scanf("%d",&n);
    //     if(random == n){
    //         printf("Exact!");
    //         break;
    //     }else if(random > n){
    //         printf("Bigger! ");
    //     }else if(random < n){
    //         printf("Smaller! ");
    //     }
    // }

    // 로또 번호 생성 및 내 당첨번호 확인
    // 로또 번호 종류 / 개수 : 1~46 / 6개
    srand(time(NULL));

    int lotto[6];
    int answer[6];
    int matchNum[6];
    int matchCnt = 0;
    int ans;

    do {
        ONE:
        for (int i = 0; i < 6; i++) {
            lotto[i] = (rand() % 45) + 1;
            for(int j = 0; j < i; j++){
                if (lotto[i] == lotto[j]){
                    lotto[i] = (rand() % 45) + 1;
                }
            }
        }

        printf("Input your 6 lotto numbers (1 ~ 45) : ");

        for(int i = 0; i<6; i++){
            scanf("%d",&answer[i]);
        }

        for(int i = 0; i < 6; i++) {
            for(int j = 0; j < i; j++) {
                if(answer[i] == answer[j]){
                    printf("같은 수를 입력할 수 없습니다.\n");
                    goto ONE;
                }
            }
        }
        
        printf("Lotto Numbers :");
        for(int i = 0; i < 6; i++){
            printf(" %d",lotto[i]);
        }

        for(int i = 0; i < 6; i++) {
            for(int j = 0; j < 6; j++) {
                if(answer[i] == lotto[j]){
                    matchNum[matchCnt] = lotto[j];
                    matchCnt++;
                }
            }
        }
        
        printf("\nMatched num(s): ");

        for (int i = 0; i < matchCnt; i++){
            printf("%d ",matchNum[i]);
        }

        printf("- %d nums(s)\n",matchCnt);
        printf("계속 하시겠습니까? : (1: 계속, 0: 종료) : ");
        scanf("%d",&ans);

    } while (ans);
    


}