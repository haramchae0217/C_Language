#include<stdio.h>
#define COUNT 6
int main() {
    int score[COUNT] = {1,2,3,4,};
    int a=1,b=1,c=1;

    for (int i = 0; i<COUNT; i++)
        a+=score[i];
    for (int i = 0; i<COUNT; i++)
        b*=score[i];
    for (int i = 0; i<COUNT; i++)
        c-=score[i];

    printf("%d",a+b+c);
    // 2
    
    return 0;
}