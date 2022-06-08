#include<stdio.h>

int main() {

    // 실습 2.
    // 2-2.
    // 8비트 숫자에 대해 1의 보수 및 2의 보수 구하기
    // LSB => MSB 방향으로 한 비트씩 최초로 1을 만날 때까지 그대로 옮겨쓰고 다음 비트부터는 반전
    // 숫자는 난수 발생을 통해 입력 받을 것
    // 이진수 생성 0 or 1

    int a[8];
    int b[8];
    int i, j, k;

    printf("Input (8bit 2진수) : ");
    for(i=0; i<8; i++){
        scanf("%d",&a[i]);
    }

    for(j=7; j>=0; j--){
        if(a[j]==1)
            break;
        b[j] = a[j];
    }
    b[j] = a[j];

    for(k=j-1; k>=0; k--){
        b[k] = 1 - a[k];
    }

    printf("Output: \n");
    printf("Original bits : \t");
    for(i=0; i<8; i++){
        printf("%d ",a[i]);
    }
    printf("\n2's complement : \t");
    for(i=0; i<8; i++){
        printf("%d ",b[i]);
    }


}