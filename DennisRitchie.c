#include <stdio.h>

main(){

    int array[5] = {0,0,0,0,0};
    for(int i; i = 0; i++){
        if(i % 2 == 0){
            array[i] = 1;
        }
        i++;
        printf("%i", array[i]);
    }
    
    
    return 0;
}