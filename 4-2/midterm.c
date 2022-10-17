#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)
#define COUNT 6
#define PIVOT 12

// ex1)
int sum(int, int);

// ex2)
int myFunc(char);

// ex3)
void myFunc2(int i, int j) {
    if(i==0) {
        return ;
    }
    i--;
    myFunc2(i,i+j);
    printf("%d",j);
}

// ex7)
void swap(int *pa, int *pb) {   //a
    // int *temp;                  //b
    // temp = *pa;                 //c o
    // *pa = *pb;                  //d
    // *pb = *temp;                //e
}

int main() {

    // ex1)
    // int a = 10, b = 20;
    // int result;
    // printf("%d",sum(a,b)/2);

    // ex2)
    // int sum = 0;
    // for(int i = 0; i <3; i++){
    //     sum += myFunc('A'+i);
    //     // 65 + 66 + 67 = 198
    // }
    // printf("%d",sum);

    // ex3)
    // myFunc2(3,0);

    // ex4)
    // int score[COUNT] = {1,2,3,4,};
    // int a=1, b=1, c=1;
    // for(int i = 0; i < COUNT; i++){
    //     a += score[i];
    //     // 1+1+2+3+4+0+0 = 11
    // }
    // for(int i = 0; i < COUNT; i++){
    //     b *= score[i];
    //     // 1*1*2*3*4*0*0 = 0
    // }
    // for(int i = 0; i < COUNT; i++){
    //     c -= score[i];
    //     // 1-1-2-3-4-0-0 = -9
    // }
    // printf("%d",a+b+c);

    //ex5)
    // char arr[] = "my name is HELLO";
    // arr[PIVOT] = '\0';
    // printf("%s",arr);

    // ex6)
    // int a = 1, b = 1;
    // double c = 1.0;
    // int *pa, *pb;
    // double *pc = &c;
    // pa = &a;
    // pb = &b;
    // *pa = *pa + *pb;
    // *pb = *pa + *pb;
    // *pc = *pc / 2.0;
    // double result = (a+b+c) / sizeof(pc);
    // // a = 2, b = 3, c = 0.5
    // // sizeof(pc) = 8
    // printf("%.6f",result);

    // ex8)
    // int arr[5] = {1,2,3,};  //a
    // int *p = arr;           //b
    // const int *q = arr;     //c
    // int *r = NULL;
    // p[4]++;                 //d
    // q[4]++;                 //e o
    // p++;                    //f
    // q++;                    //g
    // arr++;                  //h o
    // arr=r;                  //i o

    // ex9)
    // char name[20];
    // name[0] = 'L';
    // name = "kim chul su";
    // char * pName = name;
    // pName[0] = '\0';
    // pName = "Song chul su";

    // ex10)
    // char myString[30] = "ABCDEFG";
    // char str[30] = "abcd";
    // char * ps1 = "12";

    // strcpy(myString,"M");
    // strcpy(myString,ps1);
    // strcpy(myString,str);
    // int length = strlen(myString);
    // for(int i = 0; i < 7; i++){
    //     printf("%c",myString[i]);
    // }

    return 0;
}

int sum(int a, int b) {
    int temp;
    temp = a + b;

    return temp;
}

int myFunc(char ch) {
    return ch;
}