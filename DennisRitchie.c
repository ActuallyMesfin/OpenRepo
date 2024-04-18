#include <stdio.h>
#include <stdlib.h>

int main() {

    void *ptr;
    ptr = malloc(sizeof(int));
    if (ptr == NULL){
        printf("FAILED MEMORY ALLOCATION");
        return 1;
    }
    printf("%p\n", ptr);
    //printf("%d", sizeof(*ptr));
    free(ptr);
    //I LOVE VIM SO MUCH
    return 0;
}
<<<<<<< HEAD
=======
//yeee
>>>>>>> 9aaec8cac9761fac8f7eadff932f088c61b7306d
