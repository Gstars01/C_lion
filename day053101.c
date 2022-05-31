//
// Created by khw49 on 2022-05-31.
//
#include <stdio.h>
typedef struct Human{
    char name[12];
    int age;
    double height;
}Human;
int main()
{
    Human kim = {"김상형",29,181.4};
    Human *pHuman = &kim;
    printf("이름 : %s, 나이 %d세, 키 : %.1fcm\n",pHuman->name,(*pHuman).age,(*pHuman).height);  //**포인터의 경우 화살표 연산자를 사용가능**
    return 0;
}