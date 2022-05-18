#include<stdio.h>

int factorial(int n) {
    if(n==1 || n==0){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {

    // 실습1.
    // 수열 1+2!+3!+4!+5!+...+N!
    // 반복문을 이용
    // 수열도 출력
    // 무한 반복 모듈 추가

    int n;
    int sum;
    int ans = 1;

    while (1)
    {
        printf("Input N : ");
        if (scanf("%d",&n) == EOF)
            break;

        printf("%d! : ",n);

        for(int i=1; i<=n; i++){
            sum += factorial(i);
            printf("%d! + ", i);
        }
        
        printf("\b\b= %d\n",sum);
    }
    
}