//
// Created by khw49 on 2022-06-07.
//
#include <stdio.h>
int main()
{
    FILE *f;
    char *str = "�� ������ cǥ�� �Լ��� ������ �ؽ�Ʈ �����̴ϴ�. \n"
                "C����̺��� temp ���丮�� Test.txt��� �̸����� ���� �˴ϴ�.\n";

    f = fopen("c:\\Temp\\Test.txt","wb");
    if(f ==NULL){
        puts("���� ��������");
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