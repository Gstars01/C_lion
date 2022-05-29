//
// Created by khw49 on 2022-05-29.
//
#include <Stdio.h>
#include <string.h>
char strreplace(char *str,char *a,char *b){
    char* strp;
    char* ap = a;
    char* bp = b;
    strp = strstr(str,ap);
    strp = strcat(strp,bp);
    printf("after : %s",strp);
    return strp;
}
int main(){
    char str[] = "pepper mint ";
    char a[] = "mint";
    char b[] = "choco";
    printf("before : %s\n",str);
    strreplace(str,a,b);
    return 0;
}