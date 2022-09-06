#include<stdio.h>
#include<math.h>

int factorial(int n) {
    if(n==1 || n==0){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    
    // 실습1. 이차방정식의 해 구하기
    // ax^2 + bx + c = 0
    // a, b, c는 입력받기
    // 판별식이 0 또는 양수인 각 경우만 처리한다.
    // 판별식이 음수면 '허근!'이라는 제어문 출력
    // 판별식 : b^2 - 4ac > 0 해가 두 개
    // 판별식 : b^2 - 4ac = 0 해가 한 개
    // sqrt함수 사용

    // float a, b, c, result, result1;
    // printf("Input 3 Coefficients in quadratic equation (ax^2 + bx + c = 0) : ");
    // scanf("%f %f %f",&a,&b,&c);

    // float discriminant = pow(b,2) - (4*a*c);

    // if (a != 0) {
    //     if (discriminant > 0) {
    //         result = (-b+sqrt(discriminant))/2*a;
    //         result1 = (-b-sqrt(discriminant))/2*a;
    //         printf("판별식 b^2-4ac > 0 이므로 해가 두 개\n");
    //         printf("x = %.0f, x = %.0f", result, result1);
    //     } else if (discriminant == 0) {
    //         result = (-b)/(2*a);
    //         printf("판별식 b^2-4ac = 0 이므로 해가 한 개\n");
    //         printf("x = %.2f", result);
    //     } else if (discriminant < 0) {
    //         printf("판별식 b^2-4ac < 0 이므로 해가 존재하지않음!\n");
    //     } else {
    //         printf("잘못된 입력...!");
    //     }
    // } else {
    //     result = -c / b;
    //     printf("이 방정식은 일차방정식입니다.\n");
    //     printf("그래도 계산해드릴게요. x = %.2f",result);
    // }

    // 실습2. N!
    // 2-1. 반복문으로 구현
    // 팩토리얼 결과만 출력
    // int n=0;
    // int sum=1;
    // printf("Input N : ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i = 1; i<=n; i++){
    //     sum*=i;
    // }
    // printf("%d! = %d",n,sum);

    // 2-2. 재귀함수로 구현
    // 팩토리얼 결과만 출력

    // int n;
    // printf("Input N : ");
    // scanf("%d",&n);
    
    // printf("%d! = %d",n,factorial(n));

    // 2-3. 재귀함수로 구현
    // 팩토리얼 항을 함께 출력
    int n;
    printf("Input N : ");
    scanf("%d",&n);
    
    printf("%d! : ",n);

    for(int i=1; i<=n; i++){
        printf("%d * ",i);
    }
    
    printf("\b\b= %d\n",factorial(n));

}