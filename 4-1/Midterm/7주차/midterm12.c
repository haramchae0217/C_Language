#include<stdio.h>

int main(){
    int i = 10;
    int *pi = &i;
    int **dpi = &pi;

    *pi = i + 2;
    **dpi = *pi + 2;

    int ret = i + *pi + **dpi;

    printf("%d,%d,%d,%d",i,*pi,**dpi,ret);
    // 42
}