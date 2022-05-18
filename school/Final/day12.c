#include<stdio.h>

int factorial(int n) {
    if(n==1 || n==0){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int fibonacci(int n) {
    if(n==1 || n==2){
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main() {

    // 실습 1.
    // 수열 1+2!+3!+4!+5!+...+N!
    // 반복문을 이용
    // 수열도 출력
    // 무한 반복 모듈 추가

    // int n;
    // int sum;

    // while (1)
    // {
    //     printf("Input N : ");
    //     if (scanf("%d",&n) == EOF)
    //         break;

    //     printf("%d! : ",n);

    //     for(int i=1; i<=n; i++){
    //         sum += factorial(i);
    //         printf("%d! + ", i);
    //     }
        
    //     printf("\b\b= %d\n",sum);
    // }
    
    // 실습 2.
    // 피보나치 수열의 N번째 항 구하기 (1)
    // 1,1,2,3,5,8,13,...
    // 재귀함수로 구현

    int n;
    int sum;

    printf("Input N (단, N >= 3) : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%d, ",fibonacci(i));
    }
    sum = fibonacci(n);

    printf("\b\b = %d",sum);

}