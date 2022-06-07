//
// Created by khw49 on 2022-06-07.
//
#include<stdio.h>
#include <io.h>
#include <stdlib.h>

int main(){
    char path[_MAX_PATH];
    char drive[_MAX_DRIVE];
    char dir[_MAX_DIR];
    char fname[_MAX_FNAME];
    char ext[_MAX_EXT];

    strcpy(path, "c:\\My Document\\test\\Report 2.5.bak");
    _splitpath(path,drive,dir,fname,ext);
    printf("파일명 = %s\n",fname);
    printf("패스명 = %s\n",path);
}
