#include <stdio.h>

int main(){
    int *ptr = NULL;
    int a;
    printf("Address of null ptr:%p\n", ptr);
    printf("Address of A: %p\n", &a);
    ptr = &a;
    printf("Address of null ptr:%p\n", ptr);
    printf("Address of A: %p\n", &a);
    return 0;
}