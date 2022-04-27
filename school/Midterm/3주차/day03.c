/*
비트 연산자
비트단위로 논리연산을 실행
&& : 논리연산
& : AND 연산자
| : OR 연산자
^ : XOR 연산자 서로 다를때만 1 아니면 0
~ : NOT 연산자
<< : shift left 연산자 - LSB를 0으로 채움 - shift left 4를 한다면 2^4 증가
>> : shift right 연산자 - 양수면 MSB를 0으로 음수면 1로 채움 - shift right 4를 한다면 2^(-4) 감소

관계연산 > 논리연산 

우선순위가 같은 경우 연산 방향 : 결합성

5장 선택문 (if, switch~case)

if - 조건식
else if - 조건식
else - Dangle else : 중첩 if문의 중괄호가 없으면 else는 가장 가까운 if와 결합된다.

switch - 조건식
case - 정수상수, 문자상수, enum열거형상수, define매크로상수

6장 반복문 (for, while, do while)

for - 초기값부터 어떠한 조건을 만족할 때까지 반복할 때 사용.
while - 정확한 반복횟수를 모를 때 사용.
do while - 조건을 묻기도 전에 한 번 수행을 하고 그 다음 조건을 따질 때 사용.

for(초기식; 조건식; 증감식){
    code;
}

while(조건식){
    code;
}

do {
    code;
} while (조건식);

break 분기문 - 반복문 종료

while(조건문){
    for(초기식; 조건식; 증감식){
        if(조건식)break;
    }
}

continue 분기문 - 반복문의 일부를 건너뛴다.
for(초기식; 조건식; 증감식){
    if(조건문){
        continue;
    }
    code;
}

7장 함수

함수 = 헤더(header, prototype) + 바디(body)
함수 헤더 : 함수명, 매개변수, 반환형으로 구성
    함수명 : 함수의 기능에 맞는 이름
    매개변수 : 함수가 기능을 수행하는데 필요한 데이터
    반환형 : 함수가 수행된 후의 결과

반환형   함수명   매개변수
int     sum(int x, int y){
    return x+y;
}
sum(2,3) ==> 5
    인자

함수 선언(함수 프로토타입(원형) 선언)
    원형에 세미콜론을 붙여 선언하며, 매개변수명 생략가능
    ex) int sum(int, int);
    모든 함수는 호출 전에 선언(또는 정의)되어야 함

    선언 : 붕어빵 굽는 틀을 만듦
    정의 : 붕어빵을 만듦

재귀함수 : 인공지능에서 주로 사용

*/