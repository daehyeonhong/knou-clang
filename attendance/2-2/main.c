/*  예제: 선행처리기 #define 문을 이용한 매크로 처리
 *  파일 이름: main.c
 *  수정 일자: 2022년 5월 11일
 *  작성자: 홍대현
*/
#include <stdio.h>

#define IN "원의 반지름은 100입니다.\n"                      // 선행처리기를 이용하여 IN, PI, AREA, OUT 매크로 처리
#define PI 3.1415926535
#define AREA(X)(PI*(X)*(X))
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다.\n")

void main() {
    printf("%s\n", IN);                                 // IN 호출시 매크로로 정의된 문자열로 치환
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(100));    // AREA 호출시 매크로에 정의된 함수로 치환
    OUT;                                               // OUT 호출로 매크로로 정의한 문자열 치환
}
