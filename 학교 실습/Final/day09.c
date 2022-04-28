// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h>

// enum CASES {NORMAL, NEXT, EXIT};

// intProcException(int rtV, int N){
//     if (rtV == 0){
//         // 자연수가 아닌 문자를 입력할 경우 예외처리 
//         printf("Wrong input.. Input again.. \n");
//         rewind(stdin);
//         // 입력 버퍼에서 문자(들)을 없애야 한다. 
//         // 이전처럼, 단순히 개행문자를 없애는 것이 아님
//         return NEXT;
//     }
//     if (N < 0){ // 음수 예외 처리
//         printf("Must be a Natural number.. Input again.. \n");
//         return NEXT;
//     }
//     if (N == 0 || rtV == EOF){ // 정상적인 입력이면서 입력 값이 정수 0인 경우
//         return EXIT;
//         return NORMAL;
//     }
// }

int main(){

    /*
    1. 구구단 구하기 (9단까지 세로 출력)
    */

//    for(int i = 1; i<10; i++){
//        for(int j=1; j<10; j++){
//            printf("%d * %d = %d\n",i,j,i*j);
//        }
//        printf("\n");
//    }

    /*
    2. 구구단에서 임의의 N단 구하기
    */
//    int n;
//    printf("Input N : ");
//    scanf("%d",&n);

//    for(int i = 1; i<10; i++){
//        printf("%d * %d = %d\n",n,i,n*i);
//    }

    /*
    3. 0을 입력할 때까지 무한반복
    */
//    int n;
//    while (1){
//        printf("Input N (0 for stop) : ");
//        scanf("%d",&n);
//        if (n==0){
//            printf("프로그램 종료");
//            break;
//        }
//         for(int i = 1; i<10; i++){
//            printf("%d * %d = %d",n,i,n*i);
//        }
       
//    }

    /*
    4. 임의의 단까지 가로 출력
    단과 라인 당 출력할 단 수 등 입력 받기
    1 ~ 임의의 단까지 일괄 가로 출력
    */
//    int dan, line;
//    printf("Input dan and max # per a line : ");
//    scanf("%d %d",&dan,&line);

//    for(int k = 0; k < (double)dan / line; k++){
//        for(int j = 1; j<10; j++){
//            for(int i = 1 + k * line, cnt = 0; cnt < line && i <= dan; i++, cnt++){
//                printf("%d * %d = %d\t",i,j,i*j);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }

    /*
    5. 자연수 N까지 합계 출력
    N을 입력 받음
    1+2+3+4+5+...+N
    0을 입력할 때까지 무한 반복
    */
//    while(!0){
//         int n=0;
//         int total=0;
//         printf("Input N (0 for stop) : ");
//         scanf("%d",&n);
//         if (n==0){
//             printf("0 입력으로 프로그램 종료");
//             rewind(stdin);
//             continue;
//         }
//         if (n<0){
//             printf("음수 입력으로 프로그램 종료");
//             continue;;
//         }
//         if (n==0 || n==EOF){ // 문자 입력 다시 확인
//             printf("잘못된 입력");
//             break;
//         } 
        
//         for(int i=1; i<n+1; i++){
//             total += i;
//         }
//         printf("%d까지의 합계 : %d\n",n,total);
//    }

    /*
    5. 예외처리 작업
    */

// int sum, rtV, N;
// while (1){
//     sum = 0;
//     N = 0;
//     printf("자연수 입력: (0 for exit): ");
//     rtV = scanf("%d", &N);
//     int rtV2 = ProcException(rtV, N);

//     switch (rtV2){
//     case NEXT:
//         continue;
//     case EXIT:
//         exit(0);
//     };

//     for (int i = 0; i <= N; i++){
//         sum += i;
//     }
//     printf("Sum: %d \n", sum);
// }

    /*
    6. 임의의 정수 M ~ N 사이의 수들을 내림 / 오름차순으로 출력
    주의 : 
        - 다음과 같이 입력했을 때,
            M N A => M>N라도 인정
            M N D => M<N라도 인정

        - 예외처리
            인자 수가 3인지, 마지막 인자가 D(d) or A(a)인지 정도만 확인
        - A(a)면 오름차순, D(d)면 내림차순
        - 예시
            두 수와, 정렬방식을 입력하시오. (예 : 5 10 A): 2 8 D
            결과 : 8 7 6 5 4 3 2
    */

   // D  = 68, d = 100, A = 65, a = 97
   int first = 0;
   int second = 0;
   char third;
   printf("두 수와 정렬방식을 입력하시오. (예: 5 10 A) : ");
   scanf("%d %d %c",&first,&second,&third);

   if(third == 65 || third == 97){
       //오름차순
       //10 5 A
       if(first>second){
           printf("%d부터 %d까지 오름차순정렬 할게요.\n",second,first);
           for(int i=second; i<=first; i++){
               printf("%d ",i);
           }
       }
       // 5 10 A
       else if(first < second){
           printf("%d부터 %d까지 오름차순정렬 할게요.\n",first,second);
           for(int i = first; i<=second; i++){
               printf("%d ",i);
           }
       }
       else{
           printf("첫번째 입력 수와 두번째 입력 수가 서로 같습니다.");
       }
   }
   else if (third == 68 || third == 100){
       // 내림차순
       // 10 5 D
       if(first>second){
           printf("%d부터 %d까지 내림차순정렬 할게요.\n",first,second);
           for(int i = first; i>=second; i--){
               printf("%d ",i);
           }
       }
       // 5 10 D
       else if(first<second){
           printf("%d부터 %d까지 내림차순정렬 할게요.\n",second,first);
           for(int i = second; i>=first; i--){
               printf("%d ",i);
           }
       }
       else{
           printf("첫번째 입력 수와 두번째 입력 수가 서로 같습니다.");
       }
   }
   else{
       printf("올바르지 않은 입력방식!!!");
   }


//     /*
//     과제 1. 1!+2!+3!+...+n!
//     반복문을 이용
//     수열도 출력
//     */
//    int n=0;
//    int sum=1;
//    printf("Input N : ");
//    scanf("%d",&n);
//    int arr[n];
//    for(int i = 1; i<=n; i++){
//        sum*=i;
//        arr[i] = i;
//        //printf("%d",arr[i]);
//    }
   
//    printf("%d! : %d = %d",n,arr[1],sum);

}


// 과제
// 수열 1!+2!+3!+...+n!

// 약수구하기