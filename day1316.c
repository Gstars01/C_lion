//
// Created by khw49 on 2022-05-19.
//
#include<stdio.h>
#include<malloc.h>
int main(){
    char *alphabet;
    char a;
    alphabet = (char *) malloc(26 * sizeof(char));
    for(int i=0;i< 26;i++) {
        a = i + 97;
        alphabet[i] = a;
    }
    for(int j=0;j<26;j++){
        printf("%c\n",alphabet[j]);
    }
    free(alphabet);
    return 0;
}