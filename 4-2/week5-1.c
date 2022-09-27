#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable: 6031)

void gugudan(int dan) {
    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", dan, i, dan * i);
    }
    printf("\n");
}

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

int plus(int a, int b) {
    return printf("두 수의 덧셈 : %d\n",a + b);
}

int minus(int a, int b) {
    return printf("두 수의 뺄셈 : %d\n",a - b);
}

int mutiply(int a, int b) {
    return printf("두 수의 곱셈 : %d\n",a * b);
}

double divide(int a, int b) {
    if (b == 0) {
        printf("Error...\n");
        return -1.;
    }

    return printf("두 수의 나눗셈 : %.1lf\n", (double) a / b);
}

int getNumbers(int *a, char *op, int *b) {
    printf("Input two numbers and op : ");
    return scanf("%d %c %d", a, op, b);
}

void Operations(int a, char op, int b) {
    switch (op) {
        case '+': 
            plus(a,b);
            break;
        case '-': 
            minus(a,b);
            break;
        case '*': 
            mutiply(a,b);
            break;
        case '/': 
            divide(a,b);
            break;
        default: 
            printf("올바르지 않은 연산자 입니다.");
            break;
    }
}

int main() {
    
    // 구구단 함수
    gugudan(4);
    gugudan(7);
    gugudan(8);

    // 팩토리얼 함수
    printf("5! = %d\n", factorial(5));

    // 피보나치 함수
    printf("5 = %d\n", fibonacci(5));
    
    // 사칙연산   
    while(1) {
        int a, b;
        char op; 
        if (getNumbers(&a, &op, &b) == EOF)
          break;
    
         Operations(a, op, b);
    }

    return 0;
}