//
// Created by khw49 on 2022-05-24.
//
#include<stdio.h>
void stradd(char *str, char c) {
    char *p = str;
    while (*p != '\0') p++;
    *p = c;
    *(p+1) = '\0';
}
int main() {
    char str[100] = "AN";
    stradd(str, 'U');
    printf("%s\n", str);
}