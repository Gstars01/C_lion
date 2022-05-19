//
// Created by khw49 on 2022-05-19.
//
#include<stdio.h>
#include<malloc.h>
int main(){
    int ten=8,one=8;
    int** height;
    height = (int**) malloc(ten*sizeof(int*));
    for(int i=0;i<ten;i++){
        height[i] = (int*) malloc(one*sizeof(int*));
    }
    for(int i=0;i<ten;i++){
         for(int j=0;j<one;i++){
             *(*(height+i)+j) = (i*10)+j;
         }
    }
    for(int i=0;i<ten;i++){
        for(int j=0;j<one;i++){
            printf("%d",height[i][j]);
        }
    }
    for(int i=0;i<ten;i++){
        for(int j=0;j<one;i++){
            free(*(*(height+i)+j));
        }
    }
    free(height);
    return 0;
}