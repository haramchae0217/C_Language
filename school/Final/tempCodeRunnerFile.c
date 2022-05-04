m2; i <= num1; i++){
        if (num1 % i == 0) {
            sum += i;
            printf("%d",i);
        }
    }
    printf("Sum : %d",sum);