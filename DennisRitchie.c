#include <stdio.h>

int main(){
    int number = 2;

    printf("%p\n", &number);
    printf("%d\n", number);

    int *pNumber = &number;

    printf("%p\n", &pNumber);
    printf("%d\n", *pNumber);

    return 0;
}