#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 6031)

#define SOMETHING 6

// ex3)
void Swap1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
} 

void Swap2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// ex15)
int sumary(int *ary,int SIZE) {
    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += ary[i];
    }
    return sum;
}

int main() {

    // ex1) -> 136.8
    double celsius = 26.0, fahrenheit1 = 0.0, fahrenheit2 = 0.0;

    fahrenheit1 = 9/5 * celsius + 32;
    fahrenheit2 = (double)9/5 * celsius + 32;

    printf("%.1f",fahrenheit1+fahrenheit2);
    
    // ex2) -> 11
    int a = 2;
    while(a<10) {
        a *= 2;
        a++;
    }
    printf("%d",a);

    // ex3) -> 10202010
    int a = 10, b = 20;
    Swap1(a, b);
    printf("%d%d",a,b);
    Swap2(a,b);
    printf("%d%d",a,b);

    // ex4) -> KU
    char arr[] = "KONKUK";
    char one, two;
    one = two = arr[0];

    for(int i = 1; strlen(arr); i++) {
        if(arr[i] < one) {
            one = arr[i];
        }
        if(arr[i] > two) {
            two = arr[i];
        }
    }
    printf("%c%c",one, two);

    // ex5) -> 21
    int num = 7, sum = 0;
    while(num-- > 0) {
        sum += num;
    }
    printf("%d",sum);

    // ex6) -> klmnopqr
    switch(SOMETHING) {
        case 1: 
            printf("a"); printf("b");
            break;
        case 2: 
            printf("a"); printf("b");
        case 3: 
            printf("a"); printf("b");
        case 4: 
            printf("a"); printf("b");
        case 5: 
            printf("a"); printf("b");
            break;
        case 6: 
            printf("a"); printf("b");
        case 7: 
            printf("a"); printf("b");
        case 8: 
            printf("a"); printf("b");
        default: 
            printf("q"); printf("r");
            break;
    }

    // ex7) -> 31
    int a = 7;
    int z1 = a << 2;
    int z2 = a >> 1;
    
    printf("%d",z1+z2);

    // ex8) -> 460
    double distance = 500000.0, velocity = 100.0;
    double tot_sec = 0.0;

    int hour = 0, min = 0, sec = 0;

    tot_sec = distance / velocity;

    hour = tot_sec / 3600;
    min = (tot_sec - hour * 3600) / 60;
    sec = tot_sec - hour * 3600 - min * 60;

    printf("%d",hour * min * sec);

    // ex9) -> E3
    int a = 'A', b = 'B', c = 'C', d = 'D';
    printf("%c%d", a + 4, d - a);

    // ex10) -> 2
    char name[20] = {0,};

    name[0] = 'l';          // 1
    name = "Kim chul su";   // 2

    char * pName = name;    // 3

    pName[0] = 'K';         // 4
    pName = "Song chul su"; // 5

    // ex11) -> -2
    int a = -1, b = 0;
    a += (b) ? b : b - 1;
    printf("%d", a);

    // ex12) -> N
    int input = 111;
    (input % 3) ? printf("M") : printf("N");

    // ex13) -> 9
    const int MAX = 5;
    int ret = 0;
    for(int i = 0; i <= MAX; i++) {
        if(i % 2 == 0) {
            continue;
        }
        ret += i;
    }
    printf("%d",ret);

    // ex14) -> 4
    int month = 7;

    if((month >= 8) || (month >= 6))
        printf("1");
    else if ((month >= 5) && (month < 7))
        printf("2");
    else if ((month >= 7) && (month < 6))
        printf("3");
    else if ((month >= 8) || (month <= 9))
        printf("4");
    else 
        printf("5");

    // ex15) -> 180
    int point[] = {10,20,30};
    int *address = point;
    int aryLength = sizeof(point) / sizeof(int);
    int result = 0;

    for(int i = 0; i < aryLength; i++) {
        result += *(point + i);
    }

    result += sumary(point, aryLength);
    result += sumary(address, aryLength);

    printf("%d",result);

    // ex16) -> 5
    int a[] = {8,2,8,1,3};
    int *p = a;
    int result = 0;

    result += p[4];
    result += *(++p);

    printf("%d",result);

    // ex17) -> KU
    char *p = "KONKUK UNIVERSITY";
    printf("%c%c", p[5], p[7]);

    // ex18) -> 122436
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 2; j++) {
            printf("%d", i*j);
        }
    }

    return 0;
}
