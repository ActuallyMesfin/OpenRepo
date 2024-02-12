#include <stdio.h>

main(){

    char hello[] = "Hello";

    for(int i = 0; i <= sizeof(hello) - 2; i++){
        printf("%c \t %p \n", hello[i], &hello[i]);
    }
    //where did that two come from? Why are there two null lines that take up 2 bytes of RAM?
    //Is this what they meant when they said C is death incarnate? >_<
    return 0;
}
//fuck everyone 