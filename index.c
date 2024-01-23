#include <stdio.h>

int main(){

    char list[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < sizeof(list); i++)
    {
        printf("Letter : %c, ", list[i]);
        printf("Index: %i, ", i);
        printf("Bytes: %i, ", sizeof(list[i]));
        printf("Address: %p \n", &list[i]);
    }
    
    return 0;
}