/*
8장 배열

동질형의 자료들을 모아놓기 위한 자료구조 -> 각 자료들은 메모리에 연속적으로 저장됨

배열의 선언
int arr[5]; [0]~[4] 생성
arr[0] = 10;
arr[1] = 20;
arr[2] = arr[0] + arr[1];
scanf("%d", &arr[3]);

배열의 초기화
int arr[5] = {1,2,3,4,5};
int arr[] = {1,2,3};
int arr[5] = {0} = {0,}

요소의 수보다 초기값이 적으면 남은 요소는 0 으로 초기화된다.
int arr[5] = {1,2,3};
arr[3],arr[4] = 0

각 자료형에 맞는 값으로 초기화한다.
double = arr[5] = {1.0, 2.1, 3.2, 4.3, 5.4};
char = arr[5] = {'a','p','p','l','e'};

sizeof 연산자를 활용한 배열 처리
int score[5];

count = sizeof(score) / sizeof(score[0]);
            =20              =4

문자 배열 다루기
- scanf함수
1. scanf("%c",&c[i]);
2. scanf("%c",&c[i]);
getchar();
3. rewind(stdin);
scanf("%c",&c[i]);

char형 배열의 선언과 초기화
char str[80] = "applejam";
scanf("%s",str); => grape
print(str) => grape

문자열을 배열에 넣는 방법 두가지
1. 배열을 선언과 동시에 초기화 시쳐주면 복사가 됨
2. strcpy 라이브러리 사용

char형 배열(문자 배열)의 선언과 초기화
1. 문자 상수로 하나씩 초기화 
= char str[80] = {'a','p','p','l','e','j','a','m'};
2. 문자열 상수로 한 번에 초기화 
= char str[80] = "applejam"

널문자를 저장할 공간이 있어야함.

문자열 대입
strcpy

char str1[80] = "cat";
char str2[80];

strcpy(str1,"tiger"); str1에 "tiger" 복사
strcpy(str2,str1); str2에 str1에 있는 "tiger"복사

char *p = strcpy(str1,"tiger");
print(&p) = "tiger"

gets, puts
char str[80];
gets(str);
puts(str);

문자열 끝에 널 문자가 없다면?
str에 배열에 할당된 메모리 영역을 넘어 널문자가 나올 때까지 출력하고 메모리 어딘가에 있는 널문자를 받을때 멈춤
쓰레기값 출력

널문자까지만 출력하기에 널문자 이후에 무슨 문자가 있어도 출력 안함.

9장 포인터

메모리의 주소
주소는 변수가 할당된 메모리의 시작 주소다.

변수의 공간(l-value)이나 값(r-value)은 이름으로 사용한다.
int a = 10;

주소를 알면 주소로도 변수의 공간이나 값을 사용할 수 있다.

32bit
포인터 변수 = 4byte
주소 값이 4byte 간격으로 저장됨.

64bit
포인터 변수 = 8byte
주소 값이 8byte 간격으로 저장된.

주소 연산자 : 변수 앞에 붙여 사용하며, 변수가 할당된 메모리의 시작 주소 값을 구한다.
ex) int a;
    &a;

포인터 : 시작 주소 값을 저장하는 변수이며, 가리키는 자료형을 표시하여 선언한다.
ex) char *pc;
    int *pi;
    double *pd;
간접 참조 연산자 : 포인터에 사용하며, 포인터가 가리키는 변수를 사용한다.
ex) *pi = 10;

int a;
int *pa;
pa = &a;
*pa = 10;
print("%d", *pa); => 10
print("%d", a); => 10

int pa,pb,pt;
double pg;

sizeof(pa)...sizeof(pg) => 4byte
sizeof(*pa)...sizeof(*pg) => 4,4,4,8byte

const를 사용한 포인터
int a = 10, b = 20;
const int *pa = &a;
pa가 가리키는 번지의 값을 다른 값으로 변경할 수 없음
pointer to constant

포인터의 대입 규칙
double a = 3.4      // double형 변수 선언
double *pd = &a;    // pd가 double형 변수 a를 카리키도록 초기화
int *pi;            // int형 변수를 가리키는 포인터
pi = (int *)pd;     // pd 값을 형 변환하여 pi에 대입

int a = 10, b = 20;
swap(a,b);

void swap(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;
} => a=10, b=20
원본 값 그대로 출력됨 왜 why 주소값에 접근해서 원래 데이터를 변형한게 아닌 swap함수 내에서만 바꿈
따라서 아래처럼 수정해야함
int a = 10, b = 20;
swap(&a, &b);

void swap(int *pa, int *pb){
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
} => a=20, b=10

포인터 : 포인터는 변수이므로 그 값을 다른 주소로 바꿀 수 있다.
int a,b;
int *p = &a;
p = &b;

포인터의 크기 : 포인터의 크기는 컴파일러에 따라 다를 수 있으며, sizeof연산자로 확인한다.
int *p;
sizeof(p);

포인터의 대입 규칙 : 포인터는 가리키는 자료형이 일치할 때만 대입한다.
int *p;
double *pd;
pd = p;(x)

10장 배열과 포인터

int arr[3];
int i;

*(arr + 0) = 10;
*(arr + 1) = *(arr + 0) + 10;

scanf("%d",arr+2);

for (i=0; i<3; i++){
    print("%5d",*(arr + i));
} => 10, 20, 30

배열명과 포인터의 차이
sizeof 연산의 결과가 다르다
int arr[3];
int *pa = arr;
sizeof(arr); => 12byte 배열 전체의 크기
sizeof(pa); => 4byte 포인터 하나의 크기
(32bit 기준)

배열명은 상수이다
배열명은 값을 바꿀 수 없음
=> arr = arr+1 
=> arr++
=> 불가능
포인터는 값을 바꿀 수 있음
=> pa = pa+1
=> pa++
=> 가능

배열명은 첫 번째 요소의 주소
포인터에 배열명을 저장하면 배열명처럼 사용 가능
배열명의 정수 덧셈은 가리키는 자료형의 크기를 곱해서 더함
포인터의 뺄셈 결과는 배열 요소 간의 간격 차이

배열이름은 곧 주소.

#include <stdio.h>

void print_arr(int *pa);

int main(){
    int arr[5] = {10,20,30,40,50};
    print_arr(arr);
    return 0;
}

void print_arr(int *pa){
    int i;
    for (i=0; i<5; i++){
        print("%d",pa[i]);
    }
}

#include <stdio.h>

void print_arr(int *pa, int size);

int main(){
    int arr1[5] = {10,20,30,40,50};
    int arr2[7] = {10,20,30,40,50,60,70};

    print_arr(arr1,5);
    print_arr(arr2,7);
    return 0;
}
void print_arr(int *pa, int size){
    for (int i=0; i<size; i++){
        printf("%d", pa[i]);
    }
}
배열의 크기를 모르기 때문에 같이 넘겨줘야함.
실행결과
10 20 30 40 50
10 20 30 40 50 60 70

11장 문자

아스키 코드
    128개의 문자에 대해 서로 다른 값을 정해 놓은 약속
    특징
        - 알파벳과 숫자는 각각 연속된 아스키 코드 값을 갖는다.
        - 소문자가 대문자보다 아스키 코드 값이 크다.
        - 제어 문자는 백슬래시와 함께 표시하며 출력할 때 그 기능을 수행한다.
    
scanf를 이용한 문자 입력
char ch1, ch2;
scanf("%c%c",&ch1, &ch2);
print("[%c%c]",ch1,ch2);

getchar, putchar함수
int ch;

ch = getchar();
printf("입력한 문자 : ");
putchar(ch);

- 모든 문자 상수는 아스키코드 값으로 바뀌어 숫자로 저장되고 연산된다.
- %c 변환 문자는 화이트 스페이스(공백 문자, 탭문자, 개행문자)도 입력하며,
  %c 앞에 공백을 사용하면 화이트 스페이스를 입력에서 제외할 수 있다.
- getchar, putchar 함수는 문자 전용 입출력 함수

getchar 이용
void my_gets(char *str, int size);

int main(){
    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열 : %s\n", str);

    return 0;
}

void my_gets(char *str, int size){
    int ch;
    int i = 0;

    ch = getchar();
    while((ch != '\n') && (i < size -1)) {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';
}
 
*/