#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable: 6031

int sum(int x, int y) {
    int tmp;

    tmp = x + y;

    return tmp;
}

int main() {
    
    int a = 10, b = 20;
    int result;

    result = sum(a,b);
    printf("result : %d\n", result);

    return 0;
}