#include<stdio.h>

int main(){
    int arr1[3] = {1,2,};
    int arr2[3] = {5,6,};
    int* parr[2] = {arr1, arr2};

    int result = 0;

    for(int i = 0; i<2; i++)
        for(int j = 0; j<3; j++)
            result += parr[i][j];

    printf("%d",result);

    return 0;

    // 14
}