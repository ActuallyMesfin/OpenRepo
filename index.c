#include <stdio.h>
int main(){

    int grid[3][3] = {{0,0,0},
                     {0,0,0},
                     {0,0,0}};

    for(int i = 0; i < sizeof(grid)/sizeof(grid[0][0]); i++){
        printf("%i\n", grid[i][i]);
    }
    return 0;
}