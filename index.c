#include <stdio.h>

void arrays(){

    int x, y;

    printf("Enter numbers x and y : ");
    scanf("%i", &x);
    scanf("%i", &y);

    char string[] = "Array of strings";
    int numbers[] = {1, x, 3}; //array of integers
    double morenumbers[] = {2.0, 3.5, y}; //array of doubles

    printf("%s \n", string);
    printf("%i \n", numbers[1]);
    printf("%lf \n", morenumbers[2]);

}

int main(){

    arrays();

    return 0;
}

