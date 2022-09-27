int n;
    int sum;

    printf("Input N (단, N >= 3) : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%d, ",fibonacci(i));
    }
    sum = fibonacci(n);

    printf("\b\b = 