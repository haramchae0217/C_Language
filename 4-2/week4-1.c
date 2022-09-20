#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable: 6031)

int main() {

    // example 01
    // double score;

    // printf("Input score : ");
    // scanf("%lf", &score);

    // if (score >= 90) {
    //     printf("A학점");
    // } else if (score >= 80) {
    //     printf("B학점");
    // } else if (score >= 70) {
    //     printf("C학점");
    // } else if (score >= 60) {
    //     printf("D학점");
    // } else {
    //     printf("F학점");
    // }

    // example 02
    // int month;

    // printf("Input month : ");
    // scanf("%d", &month);

    // if (month > 12 || month < 1) {
    //     printf("올바르지 않은 달입니다.");
    //     exit(0);
    // }

    // switch (month) {
    // case 1: 
    // case 2: printf("Winter"); break;
    // case 3: 
    // case 4: 
    // case 5: printf("Spring"); break;
    // case 6: 
    // case 7: 
    // case 8: printf("Summer"); break;
    // case 9: 
    // case 10: 
    // case 11: printf("Fall"); break;
    // case 12: printf("Winter"); break;
    // default:
    //     printf("올바른 달을 입력하세요.");
    //     break;
    // }
    
    // example03
    // double a, b, c, root1, root2, discriminant;

    // printf("Input a, b, c : ");
    // scanf("%lf %lf %lf", &a, &b, &c);

    // discriminant = pow(b,2) - (4*a*c);

    // if (a != 0) {
    //     if (discriminant > 0) {
    //         root1 = (-b-sqrt(discriminant))/2*a;
    //         root2 = (-b+sqrt(discriminant))/2*a;
    //         printf("Root1: %.2f, Root2: %.2f", root1, root2);
    //     } else if (!discriminant) {
    //         root1 = (-b)/(2*a);
    //         printf("Root: %.2f \n", root1);
    //     } else {
    //         printf("Root: Imaginery number... \n");
    //     }
    // } else {
    //     printf("2차방정식이 아닙니다.");
    // }



    return 0;
}