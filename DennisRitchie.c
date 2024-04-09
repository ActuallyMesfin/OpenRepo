#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int divide(int num1, int num2);
int multiply(int num1, int num2);

int main(){
    int a = 5;
    int b = 5;
    printf("Sum : %d\n", add(a, b));
    printf("Difference : %d\n", subtract(a, b));
    printf("Quotient : %d\n", divide(a, b));
    printf("Product : %d\n", multiply(a, b));
    return 0;
}

int add(int num1, int num2){
    return num1 + num2;
}
int subtract(int num1, int num2){
    return num1 - num2;
}
int divide(int num1, int num2){
    return num1 / num2;
}
int multiply(int num1, int num2){
    return num1 * num2;
}