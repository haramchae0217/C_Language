#include<stdio.h>

int main(){
    int num = 9;

    for(int i=32-1; i>=0; i--)
        printf("%d",(num>>i) & 1);

    // 00000000000000000000000000001001
}