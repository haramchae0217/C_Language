#include<stdio.h>

void A(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void B(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int park = 43, kim=34;
    A(&park,&kim);
    printf("%d,%d\n",park,kim); // A

    B(park,kim);
    printf("%d,%d",park,kim); // B

    // A = 34, 43
    // B = 34, 43

    return 0;
}