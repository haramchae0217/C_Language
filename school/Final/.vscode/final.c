#include<stdio.h>

int main() {
    // int b=0, c=0, mok=0, nmg=0;
    // int a[10] = {0,};

    // printf("input");
    // scanf("%d",&b);

    // do {
    //     mok = b/8;
    //     nmg = b - mok * 8;
    //     a[c] = nmg;
    //     b = mok;
    //     c++;
    // } while (mok!=0);

    // printf("output : ");

    // for(int i = c; i>=0; i--)
    //     printf("%d",a[i]);

    // int num;
    // printf("input : ");
    // scanf("%d",&num);
    // printf("result: ");
    // for(int i=3, j = 1; i>=0; i--, j++){
    //     printf("%d",(num>>i)&1);
    // }
    
    // int result = 0;
    // int input = 0;

    // printf("input : ");
    // scanf("%d", &input);

    // for(int i=0; i>input; i-=3)
    //     result +=i;

    // printf("output : %d",result);

    // int a[8], b1[8], b2[8];
    // int i = -1, c = 1;

    // printf("input : ");
    // for(i = 0; i<8; i++){
    //     scanf("%d",&a[i]);
    //     b1[i] = 1-a[i];
    // }

    // i--;

    // do {
    //     b2[i] = b1[i] + c;
    //     b2[i] = b2[i] % 2;
    //     c = b1[i] *c;
    //     i--;
    // }while(i>=0);

    // i++;
    // printf("output : ");
    // for(; i<8; i++)
    //     printf("%d",b2[i]);

    // int input;
    // int c = 0;
    // printf("input : ");
    // scanf("%d",&input);

    // for(int i=1,sign = 1, num = 1; i<=input; i++, sign*=-1){
    //     num = i*sign;
    //     c+=num;
    // }

    // printf("result : %d\n",c);

    // int input, c = 0;
    // printf("input : ");
    // scanf("%d",&input);

    // for(int idx = 1, interval = 0, num = 1; idx <= input; idx++, interval++){
    //     num+= interval;
    //     c+=num;
    // }
    // printf("output : %d",c);

    // int input1, input2;
    // printf("input : ");
    // scanf("%d %d",&input1,&input2);

    // printf("output : ");
    // if(input1>=input2){
    //     for(int i = input1; i>=input2; i--)
    //         printf("%d ",i);
    // }else{
    //     for(int i = input1; i<=input2; i++){
    //         printf("%d ",i);
    //     }
    // }

    int a,b;
    int c= 0;
    printf("input two nums : ");
    scanf("%d %d",&a, &b);

    for(int i=1; i<a; i++){
        if(i%b==0)
            c+=i;
    }
    printf("result: %d\n",c);

}
