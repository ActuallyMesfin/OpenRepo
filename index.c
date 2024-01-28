#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int length;
    srand(time(0));

    printf("How long do you want this shit to take?");

    scanf("%d", &length);

    for(int i; i <= length * 2; i++){
        
        int timelength = rand() % length;
        printf("#");
        sleep(timelength);

    }

    return 0;
}