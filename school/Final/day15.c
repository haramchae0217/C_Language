#include<stdio.h>

int main() {

    // 실습 1.
    // 1-2.
    // 8비트 숫자에 대해 1의 보수 및 2의 보수 구하기
    // LSB => MSB 방향으로 한 비트씩 최초로 1을 만날 때까지 그대로 옮겨쓰고 다음 비트부터는 반전
    // 숫자는 난수 발생을 통해 입력 받을 것
    // 이진수 생성 0 or 1

    // int a[8];
    // int b[8];
    // int i, j, k;

    // printf("Input (8bit 2진수) : ");
    // for(i=0; i<8; i++){
    //     scanf("%d",&a[i]);
    // }

    // for(j=7; j>=0; j--){
    //     if(a[j]==1)
    //         break;
    //     b[j] = a[j];
    // }
    // b[j] = a[j];

    // for(k=j-1; k>=0; k--){
    //     b[k] = 1 - a[k];
    // }

    // printf("Output: \n");
    // printf("Original bits : \t");
    // for(i=0; i<8; i++){
    //     printf("%d ",a[i]);
    // }
    // printf("\n2's complement : \t");
    // for(i=0; i<8; i++){
    //     printf("%d ",b[i]);
    // }

    // 실습 2.
    // 10진수(양의 정수)를 2진수로 변환
    // 크기 10인 배열을 사용할 것
    // 2로 나눈 몫과 나머지를 적절히 처리

    // 실습 2-1
    // 낮은 첨자 위치에서부터 이진수를 저장
    // while (1){

    //     int num;
    //     int mok;
    //     int nmg;
    //     int cnt = -1;
    //     int complement[10] = {0,};

    //     printf("Input N : ");
    //     scanf("%d",&num);

    //     if(num > 1024-1){
    //         printf("Wrong Number. 0 ~ 1024\n");
    //         continue;
    //     }

    //     mok = num;

    //     do{
    //         cnt++;
    //         mok = num / 2;
    //         nmg = num - mok * 2;
    //         complement[cnt] = nmg;
    //         num = mok;
    //     }while (mok!=0); 

    //     for(int i=cnt; i>=0; i--){
    //         printf("%d ",complement[i]);
    //     }
    //     printf("\n");
    // }

    // 실습 2-2
    // 큰 첨자 위치에서부터 이진수를 저장
    // while (1){

    //     int num;
    //     int mok;
    //     int nmg;
    //     int cnt = 10;
    //     int complement[10] = {0,};

    //     printf("Input N : ");
    //     scanf("%d",&num);

    //     if(num > 1024-1){
    //         printf("Wrong Number. 0 ~ 1024\n");
    //         continue;
    //     }

    //     mok = num;

    //     do{
    //         cnt--;
    //         mok = num / 2;
    //         nmg = num - mok * 2;
    //         complement[cnt] = nmg;
    //         num = mok;
    //     }while (mok!=0); 

    //     int k = cnt;

    //     for(int i=k; i<10; i++){
    //         printf("%d ",complement[i]);
    //     }
    //     printf("\n");
    // }

    // 실습 3.
    // 10진수(양의 정수)를 8진수로 변환
    // 크기 10인 배열을 사용할 것
    // 낮은 첨자 위치에서부터 저장할 것

    // while (1){

    //     int num;
    //     int mok;
    //     int nmg;
    //     int cnt = -1;
    //     int complement[11] = {0,};

    //     printf("Input N : ");
    //     scanf("%d",&num);
         
    //     if(num > 1073741824-1){
    //         printf("Wrong Number. 0 ~ 1073741824\n");
    //         continue;
    //     }

    //     mok = num;

    //     do{
    //         cnt++;
    //         mok = num / 8;
    //         nmg = num - mok * 8;
    //         complement[cnt] = nmg;
    //         num = mok;
    //     }while (mok!=0);
    //     complement[cnt+1] = 0;

    //     for(int i=cnt+1; i>=0; i--){
    //         printf("%d ",complement[i]);
    //     }
    //     printf("\n");
    // }

    // 실습 4.
    // 10진수(양의 정수)를 16진수로 변환
    // 크기 10인 배열을 사용할 것
    // 낮은 첨자 위치에서부터 저장할 것

    // while (1){

    //     long long num, mok, nmg;
    //     int cnt = -1;
    //     int complement[10] = {0,};

    //     printf("Input N : ");
    //     scanf("%lld", &num);
         
    //     if(num > 1.0995116e+12-1){
    //         printf("Wrong Number. 0 ~ 1.0995116e+12\n");
    //         continue;
    //     }

    //     mok = num;

    //     do{
    //         cnt++;
    //         mok = num / 16;
    //         nmg = num - mok * 16;
    
    //         complement[cnt] = nmg;
    //         num = mok;
    //     }while (mok!=0);

    //     for(int i=cnt, k; i>=0; i--){
    //         k = complement[i];
    //         if(k >= 10 && k<= 15)
    //             printf("%c", k+55);
    //         else
    //             printf("%d ", k);
    //     }
    //     printf("\n");
    // }

    // 실습 5.
    // 정수의 이진 비트 스트림 구하기
    // 양수 음수 모두 처리
    
    // 5-1.
    // MSB -> LSB 방향으로 한 비트씩 LSB위치로 Shift한 후, 정수 1과 비트 AND 후 출력

    while(1){
        unsigned int num;
        int cnt=0;

        printf("Input Number (+,-): ");
        scanf("%u",&num);
        if (num==0)
            break;

        for(int i=31; i>=0; i--){
            if(cnt%4==0 && cnt!=0 ){
                printf("  ");
            }
            printf("%d",num >> i & 1);
            cnt++;
        }
        printf("\n");
    }

}