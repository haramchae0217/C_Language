/*
12장 문자열

문자열 상수 

char 포인터로 문자열 사용

scanf함수를 사용한 문자열 입력

gets 함수를 사용한 문자열 입력
- 개행문자 대신 널 문자를 붙인다.
ex)
gets(str);
printf("입력된 문자열은 %s입니다.",str);
입력된 문자열은 apple jam입니다.

fgets 함수를 사용한 문자열 입력
- 개행문자까지 배열에 저장하고 마지막에 널 문자를 붙인다.
ex) 
fgets(str, sizeof(str), stdin);
printf("입력된 문자열은 %s입니다\n",str);
입력된 문자열은 apple jam
입니다.

char 포인터
초기화 : char *pc = "mango"
대입 : pc = "banana";
크기 : sizeof(pc) -> 4byte
수정 : pc[0] = 'x' (x)
입력 : scanf("%s",pc) (x)

char 배열
초기화 : char str[80] = "mango";
대입 : strcpy(str, "banana");
크기 : sizeof(str) -> 80byte
수정 : str[0] = 't'; (o)
입력 : scanf("%s",str); (o)

배열에 문자열을 대입하는 방법 :
1. 배열 선언 시 바로 초기화 : char arr[10] = "hello"
2. 문자 하나하나를 배열 인덱스를 통해 할당 : arr[0] = 'A';
3. 반복문을 통해 할당 : for(int i = 0; i<10; i++) arr[i] = 'B';
4. C라이브러리 함수를 이용 : strcpy(arr,"world");

원하는 개수의 문자만 복사하는 strncpy

문자열을 붙이는 strcat, strncat

문자열 길이를 계산하는 strlen
널 값을 제외하고, 배열의 크기도 아닌 순수한 문자열의 길이

문자열을 비교하는 strcmp, strncmp

문자열을 단어 단위로 반환하는 strtok_s
char article[] = "SAMSUNG's \"Galaxy-Note-10\" Lite is a varient away from USA, for now. Why? why?";
const char* delim = ",\t.?"; -> 구분자를 저장
char* next_token; // 문자 포인터
char* token = strtok_s(article, delim, &next_token); -> article 배열의 첫 글자 주소 값이 들어감

while(token) {
    printf("Token : %s",token);
    token = strtok_s(Null, delim, &next_token); // 포인터 변수의 번지 -> 2차원 포인터 문자열을 출력하고 그 이후의 번지를 업데이트해야하기 때문에 2차원 포인터 사용.
}

1. 널 값일 경우, 이전 나머지 문자열을 대상으로 계속 진행
2. 내부적으로 static 변수를 통해 문자열을 유지 -> static 변수는 실행할 때 처음만 초기화 하고 다시 실행 됐을 때는 초기화문은 실행하지 않음.
3. 이 널 인자 구문을 삭제하고 아래와 같은 구문으로 대체해도 가능

Next = next_token;
token = strtok_s(Next, delim, &next_token);

따라서 Null = next_token

문자열에서 특정 문자 추출
strchr : 위치를 추출

strstr : 서브 문자 위치를 추출

13장 변수의 영역과 데이터 공유

저장기억 영역 부류(Storage class)

사용 목적(방법)에 따라 변수의 종류를 분류
- auto, register, extern, static 등

사용 목적(방법)
- 사용 범위
    - 선언된 함수 / 블록 내
    - 프로그램을 구성하는 모든(혹은 특정) 파일 영역
- 생존 기간
    - 선언된 함수 / 블록 실행 ~ 선언된 함수 / 블록 종료
    - 프로그램 실행 ~ 프로그램 종료
- 할당된 메모리 영역
    - 스택, 데이터 세그먼트, CPU 레지스터
- 초기화 여부
    - 각 자료형의 기본 값 또는 쓰레기 값

지역 변수 앞에 auto를 붙였어야 하나 생략 가능

auto - 지역변수
register - cpu register 메모리 할당
extern - 전역변수
static(local) - 정적 지역변수
static(global) - 정적 전역변수

지역 변수
- 지역변수는 선언된 함수 안에서만 사용할 수 있다. -> 디버깅에 유리하다.
- 선언된 블록이 끝나면 저장 공간이 메모리에서 사라진다. -> 메모리를 효율적으로 사용한다.

전역 변수
- 이름이 바뀌면 사용 함수의 모든 이름을 찾아 바꿔야한다.
- 값이 이상하면 접근 가능한 모든 함수를 살펴야한다.
- 같은 이름의 지역 변수에 의해 사용 범위가 제한된다.

정적 지역 변수
- 함수 밖에 있다면 저장 공간의 할당과 회수는 함수의 호출 및 반환과 관계가 없다.

레지스터 변수
- 전역변수는 레지스터 변수로 선언할 수 없다.
- 레지스터 변수는 주소를 구할 수 없다.
- 레지스터의 사용 여부는 컴파일러가 결정한다.

주소전달과 값복사를 이용하는 방법 중 값 복사하는 방법이 더 시간이 오래걸린다.

14장 다차원 배열과 포인터 배열

2차원 이상의 배열과 포인터 배열
[i][j] i=행 row, j=열 column
행 생략 가능

행우선 : char arr[2][3] = {0,1,2,3,4,5};
- 실제 메모리에 저장되는 순서
- 3열 짜리가 2행 있다로 해석
- C언어 외 대부분

열우선 : char arr[2][3] = {0,1,2,3,4,5};
- 실제 메모리에 저장되는 순서
- 2행 짜리가 3열 있다로 해석
- OpenGL등

3차원 이상의 배열과 포인터 배열
[i][j][k] i = 면 slide, j = 행 row-major, k = 열 column-major

15장 응용 포인터

int *pi;
int **ppi;

pi = &a; -> 자료가 저장된 주소
ppi = &pi; -> 주소가 저장된 주소

이중 포인터 활용1 : 포인터 값을 바꾸는 함수의 매개변수

2차원 배열과 배열 포인터
배열포인터로 2차원 배열의 값 출력
ex) int (*pa)[4]; => int형 변수 4개의 배열을 가리키는 배열 포인터
가리키는 것은 int 4개의 1차원 배열

이차원 배열을 함수로 전달 (배열명을 인수로 주고 함수 호출) -> 배열 포인터
int (*pa)[4] = int pa[][4]

포인터 배열 -> 이차원 포인터
char *arr[5]
arr -> char **pStr

2차원 배열 -> 배열 포인터
char arr[5][10]
arr -> char (*pStr)[10]
arr -> char pStr[][10]
arr -> char pStr[5][10]
arr -> char pStr[100][10]

함수 포인터 개념

*/