#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_str(char* ps){
    printf("%s",ps);
}

int main(){
    char str[80] = "KONKUK UNIVERSITY";
    char* pStr;

    pStr = (char*)malloc(strlen(str)+1);

    strcpy(pStr,str);
    pStr[strlen(pStr)-8]='\0';
    print_str(pStr);
    free(pStr);

    return 0;

    // KONKUK UN

}