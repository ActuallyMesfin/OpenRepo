#include <stdio.h>

int main(){

    /*char symbol;
    int height;

    printf("Symbol >>> ");
    scanf("%c", &symbol);

    printf("Height >>> ");
    scanf("%i", &height);
    */
    for(int i; i <= 5; i++){

        printf("$\n");

        for(int j; j < i; j++){

            printf("$");

        }
    }

    return 0;
}