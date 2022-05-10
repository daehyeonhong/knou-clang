/*  예제: 자료형 크기 출력
 *  파일 이름: main.c
 *  수정 일자: 2022년 5월 11일
 *  작성자: 홍대현
*/
#include <stdio.h>

void main() {
    printf("char 자료형 크기 : %lu byte\n", sizeof(char));                                       // char 자료형 크기 : 1 byte
    printf("signed char 자료형 크기 : %lu byte\n", sizeof(signed char));                         // signed char 자료형 크기 : 1 byte
    printf("unsigned char 자료형 크기 : %lu byte\n", sizeof(unsigned char));                     // unsigned char 자료형 크기 : 1 byte
    printf("short 자료형 크기 : %lu byte\n", sizeof(short));                                     // short 자료형 크기 : 2 byte
    printf("short int 자료형 크기 : %lu byte\n", sizeof(short int));                             // short int 자료형 크기 : 2 byte
    printf("signed short 자료형 크기 : %lu byte\n", sizeof(signed short));                       // signed short 자료형 크기 : 2 byte
    printf("signed short int 자료형 크기 : %lu byte\n", sizeof(signed short int));               // signed short int 자료형 크기 : 2 byte
    printf("unsigned short 자료형 크기 : %lu byte\n", sizeof(unsigned short));                   // unsigned short 자료형 크기 : 2 byte
    printf("unsigned short int 자료형 크기 : %lu byte\n", sizeof(unsigned short int));           // unsigned short int 자료형 크기 : 2 byte
    printf("int 자료형 크기 : %lu byte\n", sizeof(int));                                         // int 자료형 크기 : 4 byte
    printf("signed int 자료형 크기 : %lu byte\n", sizeof(signed int));                           // signed int 자료형 크기 : 4 byte
    printf("unsigned 자료형 크기 : %lu byte\n", sizeof(unsigned));                               // unsigned 자료형 크기 : 4 byte
    printf("unsigned int 자료형 크기 : %lu byte\n", sizeof(unsigned int));                       // unsigned int 자료형 크기 : 4 byte
    printf("long 자료형 크기 : %lu byte\n", sizeof(long));                                       // long 자료형 크기 : 8 byte
    printf("long int 자료형 크기 : %lu byte\n", sizeof(long int));                               // long int 자료형 크기 : 8 byte
    printf("signed long 자료형 크기 : %lu byte\n", sizeof(signed long));                         // signed long 자료형 크기 : 8 byte
    printf("signed long int 자료형 크기 : %lu byte\n", sizeof(signed long int));                 // signed long int 자료형 크기 : 8 byte
    printf("unsigned long 자료형 크기 : %lu byte\n", sizeof(unsigned long));                     // unsigned long 자료형 크기 : 8 byte
    printf("unsigned long int 자료형 크기 : %lu byte\n", sizeof(unsigned long int));             // unsigned long int 자료형 크기 : 8 byte
    printf("long long 자료형 크기 : %lu byte\n", sizeof(long long));                             // long long 자료형 크기 : 8 byte
    printf("long long int 자료형 크기 : %lu byte\n", sizeof(long long int));                     // long long int 자료형 크기 : 8 byte
    printf("signed long long 자료형 크기 : %lu byte\n", sizeof(signed long long));               // signed long long 자료형 크기 : 8 byte
    printf("signed long long int 자료형 크기 : %lu byte\n", sizeof(signed long long int));       // signed long long int 자료형 크기 : 8 byte
    printf("unsigned long long 자료형 크기 : %lu byte\n", sizeof(unsigned long long));           // unsigned long long 자료형 크기 : 8 byte
    printf("unsigned long long int 자료형 크기 : %lu byte\n", sizeof(unsigned long long int));   // unsigned long long int 자료형 크기 : 8 byte
    printf("float 자료형 크기 : %lu byte\n", sizeof(float));                                     // float 자료형 크기 : 4 byte
    printf("double 자료형 크기 : %lu byte\n", sizeof(double));                                   // double 자료형 크기 : 8 byte
    printf("long double 자료형 크기 : %lu byte\n", sizeof(long double));                         // long double 자료형 크기 : 8 byte
}
