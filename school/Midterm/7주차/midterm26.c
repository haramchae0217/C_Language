#include<stdio.h>

int main(){
    const int MAX = 5;
    int ret = 0;

    for(int i = 1; i<=MAX; i++){
        if (i%3==0){
            continue;
        }
        ret += i;
    }
    printf("%d",ret);

}
