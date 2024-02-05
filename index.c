#include <stdio.h>

int main(){

    int x = 10;

    for(int i = x - 1; i <= x && i >= 0; i--){
        printf("#\n");
        for(int j = 0; j < i; j++){
            printf(" ");
        }
    }

    return 0;
}