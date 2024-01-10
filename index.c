#include <stdio.h>
#no it does not work lol
int main(){

    int number;
    printf("Enter height and width: ");
    scanf("%i", &number);

    for(int i = 1; i < number; i++){

        printf("#\n");

        for(int j = 1; j < number; j++){

            printf("#");
        }
        
    }

    return 0;
}
