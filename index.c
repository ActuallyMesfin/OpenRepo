#include <stdio.h>


void function(char name[], int age){

    printf("Your name is %s \n", name);
    printf("You are %i years old", age);

}

int main(){

    function("Beligo", 17);
    
    return 0;
}