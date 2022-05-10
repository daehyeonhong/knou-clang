/*  예제: 매크로 정의 헤더 파일 생성
 *  파일 이름: main.c
 *  수정 일자: 2022년 5월 11일
 *  작성자: 홍대현
*/
#include "exam2-3.h"                                        // 사용자 정의 헤더 파일 포함

void main() {
    int add_result = ADD(10, 5), sub_result = SUB(10, 5);   // exam2-3.h 파일에서 매크로 함수로 선언한 ADD, SUM 함수로 치환 및 결과값 각 변수에 할당
    printf("10과 5를 더하면 %d이다.\n", add_result);            // 사용자 정의 헤더 파일에 포함된 stdio.h 헤더 파일의 문자열 출력 함수 호출
    printf("10에서 5를 빼면 %d이다.\n", sub_result);
}
