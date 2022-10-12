#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

// int Sort(int arr[], int cnt);
// int Sort(int *arr, int cnt);
// int Sort(int arr[10], int cnt); 셋다 가능

int Sort(int arr[], int cnt) {
    int temp;
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp        = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int Maximum(int arr[], int cnt) {
    int max;
    int maxnumIndex;
    for(int i = 0; i < cnt; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxnumIndex = i + 1;
        }
    }
    printf("\n최댓값 : %d, 위치 : %d", max, maxnumIndex);
    return 0;
}

int Minimum(int arr[], int cnt) {
    int min;
    int minnumIndex;
    for(int i = 0; i < cnt; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minnumIndex = i + 1;
        }
    }
    printf("\n최솟값 : %d, 위치 : %d\n", min, minnumIndex);
    return 0;
}

int GetNums(int arr[], int cnt) {
    srand( time(NULL) );

    for(int i = 0; i < cnt; i++) {
        arr[i] = rand() % 100 + 1;
    }
    return 0;
}

int PrintNums(int arr[], int cnt) {
    for(int i = 0; i < cnt; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}

int main() {

    int arr[10];

    GetNums(arr, 10);
    PrintNums(arr, 10);
    Maximum(arr, 10);
    Minimum(arr, 10);

    Sort(arr, 10);
    PrintNums(arr,10);

    return 0; 
}


