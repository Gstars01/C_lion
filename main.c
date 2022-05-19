#include <stdio.h>


int main() {
    char str[] = "C Programming";
    char *stp=str;

    for(int i=0;i<sizeof(str);i++){
        printf("%c = %d\n",*stp,i);
        stp++;
    }

    return 0;
}
