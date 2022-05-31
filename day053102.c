//
// Created by khw49 on 2022-05-31.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct SHuman{
    char name[12];
    int age;
    double height;
}Human;
int main(){
    Human *pJuso[5];
    for(int i=0;i<5;i++){
        pJuso[i] = (Human *) malloc(sizeof (Human));
    }

    return 0;
}