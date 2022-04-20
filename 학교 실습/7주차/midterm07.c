#include<stdio.h>
#define PI 3.14

int main(){
    const int a = 1;
    int b = PI;         // A
    
    a=2;                // B
    b=3;                // C
    PI = 3.141592;      // D

    return 0;

    // A,B,D 오류
    // A : PI는 double형이다 int형에 대입 불가능.
    // B : const값 변경 못함.
    // D : define으로 정의한 값 변경 못함.

}