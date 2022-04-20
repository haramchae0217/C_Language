#include<stdio.h>
#define PIVOT 12

int main() {
    char arr[] = "my name is HELLO";

    arr[PIVOT] = '\0';
    printf("%s",arr);

    // my name is H

    return 0;
}