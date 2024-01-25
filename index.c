#include <stdio.h>

int main(){


    int x = 30;


    FILE *pF = fopen("littlecunt.txt", "w");

    fprintf(pF, "%d", x);

    fclose(pF);

    return 0;
}