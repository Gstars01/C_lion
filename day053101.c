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
    Human kim = {"�����",29,181.4};
    Human *pHuman = &kim;
    printf("�̸� : %s, ���� %d��, Ű : %.1fcm\n",pHuman->name,(*pHuman).age,(*pHuman).height);  //**�������� ��� ȭ��ǥ �����ڸ� ��밡��**
    return 0;
}