//
// Created by khw49 on 2022-06-07.
//
#include <stdio.h>
int main()
{
    FILE *f;
    char *str = "이 파일은 c표준 함수로 생성된 텍스트 파일이니다. \n"
                "C드라이브의 temp 디렉토리에 Test.txt라는 이름으로 생성 됩니다.\n";

    f = fopen("c:\\Temp\\Test.txt","wb");
    if(f ==NULL){
        puts("파일 생성실패");
        return 1;
    }else{
        fputs(str,f);
        fclose(f);
    }

    char buf[256];

    f  = fopen("c:\\Temp\\Test.txt","rb");
    if (f!=NULL){
        for(;;){
            if(fgets(buf,256,f)==NULL){
                break;
            }
            printf("%s",buf);
        }
        fclose(f);
    }
}