#include <stdio.h>

double vat(double income);
double insurance(double income);

int main(){
    double income = 50000;
    income = vat(income);
    income = insurance(income);
    printf("Your final income is : %lf", income);
    return 0;
}

double vat(double income){
    return ((income * 15) / 100);
}

double insurance(double income){
    return (income - ((income * 5)/100));
}