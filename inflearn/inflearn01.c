#include<stdio.h>

int main(void) {

    // 정수형 변수에 대한 예제
    /*
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);
    */

   // 실수형 변수에 대한 예제
   /*
   float f = 46.5f;
   printf("%.2f\n",f);
   double d = 4.428;
   printf("%.2lf\n",d);
   */

    // 상수에 대한 예제
    // const int YEAR = 1998;
    // printf("태어난 년도 : %d\n", YEAR);

    // printf
    // 연산
    // int add = 3+7; // 10
    // printf("3 + 7 = %d\n",add);
    // printf("%d * %d = %d\n", 30, 79, 30*79);

    // scanf
    // 키보드 입력을 받아서 저장

    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력 값은 %d\n",input);

    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d\n",&one, &two, &three);
    // printf("첫번째 값 : %d",one);
    // printf("두번째 값 : %d",two);
    // printf("세번째 값 : %d",three);

    // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    // char c = 'A';
    // printf("%c\n",c);

    // char str[256];
    // scanf("%s", str, sizeof(str));
    // printf("%s\n",str);

    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름, 나이, 키, 몸무게, 범죄명
    char name[256];
    printf("이름이 뭐에요?");
    scanf("%s",name,sizeof(name));

    int age;
    print("몇살이에요?");
    scanf("%d", &age);   

    double height;
    printf("키는 몇 cm에요?");
    scanf("%.2lf", &height);

    float weight;
    printf("몸무게는 몇 kg이에요?");
    scanf("%.2f", &weight);

    char what[256];
    printf("무슨 범죄를 저질렀어요?");
    scanf("%s",what,sizeof(what));

    // 조서 내용 출력
    printf("\n\n---범죄자 정보---\n\n");
    printf("이름        : %s\n",name);
    printf("나이        : %d\n",age);
    printf("키          : %.2lf\n",height);
    printf("몸무게      : %2.f\n",weight);
    printf("범죄        : %s\n",what);

    return 0;

}
