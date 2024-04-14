#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL){
        printf("FAILED MEMORY ALLOCATION");
        return 1;
    }
    printf("%p\n", ptr);
    printf("%d", sizeof(*ptr));
    free(ptr);

    return 0;
}