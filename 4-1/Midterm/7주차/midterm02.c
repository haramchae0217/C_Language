#include<stdio.h>
#include<string.h>

int main(){
    char myString[30] = "ABCDEFG";
    char str[30] = "abcd";
    char* ps1 = "12";

    strcpy(myString, "M");
    strcpy(myString, ps1);
    strcpy(myString, str);

    int length = strlen(myString);

    for(int i = 0; i<7; i++)
        printf("%c",myString[i]);

    return 0;

    //abcdFG
}