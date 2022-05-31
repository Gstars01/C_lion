#include <Stdio.h>

struct SHuman{
    char name[12];
    int age;
    double height;
};
int main(){
    struct SHuman Kim = {"±è»óÇü"  ,29,181.4};
    struct SHuman lee;

    lee = Kim;
    printf("%s : %d¼¼, Å° %.2f\n",lee.name,lee.age,lee.height);
    return 0;
}