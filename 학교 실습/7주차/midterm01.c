#include<stdio.h>

int main() {
    char name[20];
    name[0] = 'L';              // A
    name = "Kim chul su";       // B
    char* pName = name;         // C
    pName[0] = '\0';            // D
    pName = "Song chul su";     // E

    return 0;
}