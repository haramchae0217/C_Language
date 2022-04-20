#include<stdio.h>

#define ROWSIZE 3
#define COLSIZE 3

int main() {
    int td[ROWSIZE][COLSIZE] = { {1},{1,2,3},9};
    int ret = 0;

    for(int i=0; i<ROWSIZE; i++){
        for(int j=0; j<COLSIZE; j++){
            ret+=td[i][j];
        }
    }
    printf("%d",ret);
    //16
}