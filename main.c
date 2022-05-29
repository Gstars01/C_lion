<<<<<<< HEAD
//
// Created by khw49 on 2022-05-17.
//
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{
    int len=10,num = 5,i;
    char **name;

    name = (char **)malloc(num*sizeof(char *));
    for(i=0;i<num;i++){
        name[i] = (char*) malloc(len*sizeof(char));
    }
    for(i=0;i<num;i++){
        sprintf(name[i],"string %d",i);
        puts(name[i]);
    }
    for(i=0;i<num;i++){
        free(name[i]);
    }
    free(name);
=======
#include <stdio.h>


int main() {
    char str[] = "C Programming";
    char *stp=str;

    for(int i=0;i<sizeof(str);i++){
        printf("%c = %d\n",*stp,i);
        stp++;
    }

>>>>>>> c7f2142502e50a4e4be06272b93d78d1eb6b60de
    return 0;
}
