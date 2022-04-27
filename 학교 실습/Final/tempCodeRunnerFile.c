enum CASES {NORMAL, NEXT, EXIT};

//     intProcException(int rtV, int N){
//         if (rtV == 0){
//         // 자연수가 아닌 문자를 입력할 경우 예외처리 
//         printf("Wrong input.. Input again.. \n");
//         rewind(stdin);
//         // 입력 버퍼에서 문자(들)을 없애야 한다. 
//         // 이전처럼, 단순히 개행문자를 없애는 것이 아님
//         return NEXT;
//     }
//     if (N < 0){ // 음수 예외 처리
//         printf("Must be a Natural number.. Input again.. \n");
//         return NEXT;
//     }
//     if (N == 0 || rtV == EOF){ // 정상적인 입력이면서 입력 값이 정수 0인 경우
//         return EXIT;
//         return NORMAL;
//     }
// }