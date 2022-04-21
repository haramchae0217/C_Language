#include<stdio.h>

int main(){
    int a[5] = {8,2,8,1,3};
    int *p = a;

    int ary[][4]={5,7,6,2,7,8,};
    int(*ptr)[4] = ary;

    printf("%d",p[1] + p[4] + *(ary[1]+1) + *(ptr[1]+2));

    return 0;
}

