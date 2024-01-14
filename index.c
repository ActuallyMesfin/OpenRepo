#include <stdio.h>

double function(int position){

    double array[3][3] = {{0, 0, 0}, 
                         {1, 1, 1}, 
                         {2, 2, 2}};

    array[1][1] = position;

    return position;
}

void main(){

    printf("%lf", function(2));
    
}