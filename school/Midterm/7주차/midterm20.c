#include<stdio.h>

void swap_ptr(char** ppa, char** ppb){
    char* pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}

int main(){
    char* pa = "12";
    char* pb = "21";

    swap_ptr(&pa,&pb);
    printf("%s %s",pa,pb);

    return 0;

    // 21 12
}