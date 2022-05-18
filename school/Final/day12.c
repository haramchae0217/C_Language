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

    // int n;
    // int sum;

    // printf("Input N (단, N >= 3) : ");
    // scanf("%d",&n);

    // for(int i=1; i<=n; i++){
    //     printf("%d, ",fibonacci(i));
    // }
    // sum = fibonacci(n);

    // printf("\b\b = %d",sum);

    // 실습 3.
    // 피보나치 수열의 N번째 항 구하기 (2)
    // 1,1,2,3,5,8,13,...
    // 반복문으로 구현

    // int n;
    // int arr[n];

    // printf("Input N (단, N>=3) : ");
    // scanf("%d",&n);

    // for(int i = 0; i<=n-1; i++){
    //     if(i<2){
    //         arr[i] = 1;
    //         printf("%d, ",arr[i]);
    //     } else {
    //         arr[i] = arr[i-1] + arr[i-2];
    //         printf("%d, ",arr[i]);
    //     }
    // }
    // printf("\b\b = %d",arr[n-1]);

    // 실습 4.
    // 약수 구하기
    // N의 약수 : 정수 N을 나누어 떨어지게 하는 정수
    // 양의 약수만을 가정

    // int n;

    // printf("Input N : ");
    // scanf("%d",&n);

    // for(int i = 1; i<=n; i++){
    //     if(n%i==0){
    //         printf("%d ",i);
    //     }
    // }

    // 실습 5.
    // 최대공약수(GCM), 최소공배수(LCM)
    // 최대공약수 : 공통 약수 중에 최대 수
    // 최소공배수 : 공통 배수 중에 최소 수

    int a, b;
    int g;
    int l;

    printf("Input two nums : ");
    scanf("%d %d",&a,&b);

    for(int i = 1; i<=a && i<=b; ++i){
        if(a%i==0 && b%i==0){
            g = i;
        }
    }
    printf("최대 공약수 : %d",g);
    printf("최소 공배수 : %d",(a*b)/g);

}


