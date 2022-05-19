//
// Created by khw49 on 2022-05-19.
//
#include<stdio.h>
#include<malloc.h>
int main(){
    int eight = 8;
    int **double_Arr;

    double_Arr = (int**) malloc(eight * sizeof(int*));
    for(int i=0;i<eight;i++){
        double_Arr[i] = (int *) malloc(eight*sizeof(int ));
    }
    printf("processed");
    for(int i=0;i<eight;i++){
        for(int j=0;j<eight;j++){
            double_Arr[i][j] = i*10+j;
        }
    }
    printf("processed");
    for(int i=0;i<eight;i++) {
        for(int j=0;j<eight;j++){
            printf("%d %d : ",i,j);
            printf("%d\n ",double_Arr[i][j]);
        }
    }
    for(int i=0;i<eight;i++){
        free(double_Arr[i]);
    }
    free(double_Arr);
    return 0;
}