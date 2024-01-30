#include <stdio.h>

int * hexforint(int value){
    return("%p", &value);
}

int main(){

    int user_input = 3;
    //scanf("%i", &user_input);

    printf("%p", hexforint(user_input));

    return 0;
}