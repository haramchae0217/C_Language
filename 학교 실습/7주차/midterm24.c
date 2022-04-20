#include<stdio.h>

int main(){
    char c = '\0';
    int i = 1;
    double d = 1.0;

    printf("%d", sizeof(c) + sizeof(i) + sizeof(d) + sizeof(10) + sizeof(20.0));
}