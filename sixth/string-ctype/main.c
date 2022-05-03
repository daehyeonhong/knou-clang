#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    int alp = 0;
    int no = 0;
    int et = 0;
    char s[20];
    printf("char");
    scanf("%s", s);
    for (int i = 0; i < strlen(s); ++i)
        if (isalpha(s[i]))alp++;
        else if (isdigit(s[i]))no++;
        else et++;
    printf("alphabet=%d\n", alp);
    printf("digit=%d\n", no);
    printf("etc=%d\n", et);
    return 0;
}
