#include<stdio.h>

int main() {
    int score = 89;
    
    switch(score/10){
    default:
        printf("A");
        break;

    case 10:
        printf("B");
        break;

    case 9:
        printf("C");
    
    case 8:
        printf("D");
    
    case 7:
        printf("E");
    
    case 6:
        printf("F");
        
        break;
    }

}