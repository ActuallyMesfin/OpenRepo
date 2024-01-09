#include <stdio.h>


double functional(number){

    number = number * number;
    return number;

}

void main(){
    double y = functional(6);
    printf("%lf", y);
}



