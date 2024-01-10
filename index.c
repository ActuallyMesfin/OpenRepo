#include <stdio.h>

double functional();

void main(){
    double x = functional(6);

    for(double y; y <= 10; y++){
        printf("%lf \n", x);
    }
}

double functional(number){

    number = number * number;
    return number;

}

