#include <stdio.h>

#define int size = 9; //Size of the array?
#define int checker; //alternates between 0 and 1

int main(){
    int screen[3][3] = {{0,0,0}, 
                        {0,0,0}, 
                        {0,0,0}};

    for(int i; i <= 9; i++){

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