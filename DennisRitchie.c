#include <stdio.h>

int main(){
    int a[3][3];
    a[0][0] = 0;
    int *b = &a[0][0];
    printf("%d\n", a[0][0]);
    printf("%p", a);
    return 0;
}