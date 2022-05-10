/*  예제: 입력된 두 수의 곱 출력
 *  파일 이름: main.c
 *  수정 일자: 2022년 5월 10일
 *  작성자: 홍대현
*/
#include <stdio.h>                                          // 문자열 입력 및 출력을 위해 헤더 파일 포함

#pragma warning(disable:4996)                               // scanf()에 대한 경고 메시지 무시
int a, b, c;                                                // 변수 a, b, c  선언
int product(int x, int y);                                  // 사용자 함수 원형
void main() {
    printf("Enter a number between 1 and 100 : ");          // 처음 입력 받을 수에 대한 범위 출력
    scanf("%d", &a);                                        // 처음 입력 받은 값 변수 a에 저장
    printf("Enter another number between 1 and 100 : ");    // 다음에 입력 받을 수에 대한 범위 출력
    scanf("%d", &b);                                        // 다음 입력 받은 값 변수 b에 저장
    c = product(a, b);                                // 사용자 정의 함수 product 연산 결과 값 c에 입력
    printf("%d * %d = %d\n", a, b, c);                      // 입력 값에 대한 연산 출력
}

int product(int x, int y) {
    return x * y;                                           // 매개 변수로 전달된 두 정수에 대한 곱을 반환하는 함수 생성
}
