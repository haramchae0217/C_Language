#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#pragma warning(disable: 6031)

#define PI 3.141592

int binary(int number) {
    for (int i = 31; i>=0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
    return 0;
}

int main() {

    // int  a = 10, b = 12;

    // binary(a);
    // binary(b);

    // double radius;
    // double area;

    // printf("반지름을 입력하세요 : ");
    // scanf("%lf", &radius);

    // area = pow(radius, 2.0) * PI;
    // printf("원의 넓이는 : %f", area);

    double x1, y1, x2, y2;
    double distance;

    printf("input two points (x1, y1), (x2, y2) : ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    distance = sqrt(pow(x2-x1,2.0) + pow(y2-y1,2.0));

    printf("두 점의 거리는 : %f", distance);

    return 0;

}