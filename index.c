#include <stdio.h>

int main(){
    int value;
    int* ptr = &value;
    printf("%p\n", &value);
    printf("%p", ptr);
    return 0;
}