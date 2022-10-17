[30] = "ABCDEFG";
    char str[30] = "abcd";
    char * ps1 = "12";

    strcpy(myString,"M");
    strcpy(myString,ps1);
    strcpy(myString,str);
    int length = strlen(myString);
    for(int i = 0; i < 7; i++){
        printf("%c",myString[i]);
    }