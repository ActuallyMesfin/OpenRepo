#include <stdio.h>

int main(){
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elements = sizeof(array)/sizeof(array[0]);
    int target_value = 3;

    for(int i = elements/2; i <= elements; i++){
        if(array[i] > target_value){
            printf("Target below Index[%d]\n", i);
            i = i * 2;
        }
        elif(array[i] < target_value){
            //Mom I am a Gigachad right🐺
            printf("Target above Index[%d]\n", i);
            i = i * 2;
        }
        else{
            printf("%d\n", array[i]);
        }
    }

    return 0;
}