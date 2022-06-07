//
// Created by khw49 on 2022-06-07.
//
#include <stdio.h>
#include <io.h>
int main() {
    struct _finddata_t fd;
    long handle;
    int result  =1;

    handle = _findfirst("c:\\*.*",&fd);
    if(handle == -1) return 0;
    while(result != -1){
        printf("파일명 : %s, 크기 : %d\n",fd.name,fd.size);
        result = _findnext(handle,&fd);
    }
    _findclose(handle);
    return 0;
}