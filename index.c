#include <stdio.h>

int main(){

    char list[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < sizeof(list); i++)
    {
        printf("%i \n", sizeof(list[i]));
    }
    
    

    return 0;
}