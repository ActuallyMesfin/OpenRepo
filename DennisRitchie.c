#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float divide(float num1, float num2);
float multiply(float num1, float num2);

int main(){
    float a = 5;
    float b = 5;
    printf("Sum : %.2f\n", add(a, b));
    printf("Difference : %.2f\n", subtract(a, b));
    printf("Quotient : %.2f\n", divide(a, b));
    printf("Product : %.2f\n", multiply(a, b));
    return 0;
}

float add(float num1, float num2){
    return num1 + num2;
}
float subtract(float num1, float num2){
    return num1 - num2;
}
float divide(float num1, float num2){
    return num1 / num2;
}
float multiply(float num1, float num2){
    return num1 * num2;
}