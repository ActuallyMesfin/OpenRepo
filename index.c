#include <stdio.h>
#include <stdlib.h>

int main(){

    char * name = malloc(4);

    name[0] = 'A';
    name[1] = 'B';
    name[2] = 'E';
    name[3] = 'L';

    /*printf("%p \n", &name[0]);
    printf("%p \n", &name[1]);
    printf("%p \n", &name[2]);
    printf("%p", &name[3]);
    */
   for(int i; i < sizeof(name); i++){
    printf("%c", name[i]);
   }

    free(name);

    return 0;
}