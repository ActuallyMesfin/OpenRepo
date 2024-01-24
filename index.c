#include <stdio.h>

void line(){

    printf("\n------------------------------\n");

}


int main(){

    int value = 3;
    int *pValue = &value;

    line();

    printf("Original Value : %d \n", value);
    printf("Original Address : %p", &value);

    line();

    printf("Pointer Value : %d \n", *pValue);
    printf("Pointer Address I think : %p", &pValue);

    line();
    
    return 0;
}