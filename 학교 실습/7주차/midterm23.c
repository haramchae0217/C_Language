#include<stdio.h>
#define POWER(x) (x*x)

int main(){
    double x = 10.0, y =11.0;
    printf("%.1f",POWER(x+y));
    return 0;

    //131.0
}