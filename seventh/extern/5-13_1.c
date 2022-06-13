//
// Created by DaeHyeon Hong on 2022/06/13.
//
#include <stdio.h>

extern char s[];

void extern_ex() {
    printf("extern Variable s's value is %s", s);
}
