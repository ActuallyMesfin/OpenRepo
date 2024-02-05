#include <stdio.h>

main(){

    float celc, fahr, jump;

    fahr = 0;
    jump = 5;

    while(fahr <= 50){

        celc = 5 * (fahr - 32) / 9;
        printf("%.1f \t %.1f \n", fahr, celc);
        fahr += jump;
        
    }

    return 0;
}