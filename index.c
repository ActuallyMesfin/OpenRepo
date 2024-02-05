#include <stdio.h>

main(){

    float celc, fahr, jump;

    celc = 0;
    fahr = 0;
    jump = 5;

    while(fahr <= 50){
        celc = 5 * (fahr - 32) / 9;
        printf("%.2f \t %.2f \n", fahr, celc);
        fahr += jump;
    }

    return 0;
}