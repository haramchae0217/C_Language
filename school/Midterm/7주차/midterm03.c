#include<stdio.h>

int myFunc(char);

int main(){
    int sum = 0;

    for (int i=0; i<3; i++){
        sum += myFunc('A'+i);
    }

    printf("%d",sum);

    return 0;

    //198
}

int myFunc(char ch){
    return ch;
}