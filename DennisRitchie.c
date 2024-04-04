#include <stdio.h>

int main(){
    int a = 40;
    int *b = &a;
    printf("%d\n", a);

    *b = 50;
    printf("%d\n", a);
    return 0;
}