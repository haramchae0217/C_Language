#include<stdio.h>
#include<string.h>

int main(){
    char arr[] = "KONKUK";

    char one, two;
    one = two = arr[0];

    for(int i = 1; i<strlen(arr); i++){
        if(arr[i]<one)
            one = arr[i];

        if(arr[i]>two)
            two = arr[i];
    }

    printf("%c %c",one,two);

    return 0;

    // K U
}