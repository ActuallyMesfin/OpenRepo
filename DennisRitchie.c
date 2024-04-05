//typecasting
#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;
    printf("%d / %d = %d\n", a, b, a/b);
    double c = (double) a / b;
    printf("%d / %d = %f", a, b, c);
    return 0;
}