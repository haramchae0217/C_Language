#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable: 6031)

int swapValue(int a, int b);
int swapReference(int *a, int *b);

int main() {

    int a, b;
    printf("Input two nums > ");
    scanf("%d %d", &a, &b);

    swapValue(a, b);
    printf("a = %d, b = %d\n", a, b);

    swapReference(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

int swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    return 0;
}

int swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}