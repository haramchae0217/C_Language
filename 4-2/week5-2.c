#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable: 6031)

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

    // 팩토리얼 함수
    int fac;
    printf("Input factorial : ");
    scanf("%d", &fac);
    printf("%d! = %d\n", fac, factorial(fac));

    // 피보나치 함수
    int fib;
    printf("Input fibonacci");
    scanf("%d", &fib);
    printf("fibonacci of %d = %d\n", fib, fibonacci(fib));

    return 0;
}