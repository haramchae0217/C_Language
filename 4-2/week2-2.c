#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

    // float a = 0.1;
    // float b = 0.2;

    // if((a+b) == 0.3) {
    //     printf("true");
    // } else {
    //     printf("false");
    // }

    char fruit[20] = "strawberry"; // strawberry로 초기화
	
	printf("%s\n", fruit); // strawberry 출력
	strcpy(fruit, "banana"); // fruit에 "banana" 복사
	printf("%s\n", fruit); // banana 출력


    return 0;
}