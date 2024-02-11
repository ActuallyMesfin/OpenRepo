#include <stdio.h>

int size = 9; 
int checker;

int main(){
    int screen[3][3] = {{0,0,0}, 
                        {0,0,0}, 
                        {0,0,0}};

    for(int i; i <= size; i++){

        for(int j; j <= i; j++){

            if(screen[i][j] == 0){
                checker++;
                printf("Pixel at location [%d][%d] is Black", i, j);
            }
            else{
                printf("Pixel at location [%d][%d] is White", i, j);
                continue;
            }
        }
    }
    
    return 0;
}