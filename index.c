#include <stdio.h>

int main(){

    int array[3][3] = {{0,1,2}, 
                       {3,4,5}, 
                       {6,7,8}};

    /*
    So based on my silly understanding, take the location [x][y]
    x states the row? And y the column?
    When will this ever be applicable anyway? Like making a grid of zeros to represent
    black or some shit like that? I ain't doin allat gang
    */

    printf("%i", array[2][1]);

    return 0;
}