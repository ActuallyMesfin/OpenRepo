#include <stdio.h>
//figuring out the size of shit
 int main(){

    char a = '#';

    printf("%c \n", sizeof(a));
    printf("%hd \n", sizeof(a));
    printf("%i \n", sizeof(a));
    printf("%ld \n", sizeof(a));
    printf("%lf \n", sizeof(a));
    
    return 0;
 }