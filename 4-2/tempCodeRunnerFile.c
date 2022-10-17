a
    int *p = arr;           //b
    const int *q = arr;     //c
    int *r = NULL;
    p[4]++;                 //d
    q[4]++;                 //e o
    p++;                    //f
    q++;                    //g
    arr++;                  //h o
    arr=r;                  //i o