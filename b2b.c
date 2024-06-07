#include <stdio.h>
#include <math.h>

#define Gravity 9.8
#define Pi 180


struct Pendulum
{
    
    float mass;
    float length;
    float angle;

};


float period(){

    struct Pendulum mass1; //5kg, 5m, 30°
    //struct Pendulum *ptr;

    printf("Enter Mass : ");
    scanf("%f\n", mass1.mass);

    printf("Enter Length : ");
    scanf("%f\n", mass1.length);

    float lengthovergravity = mass1.length/Gravity;
    float period = (2 * Pi) * sqrt(lengthovergravity);
    return period;
}

int main(){
    printf("The period of the pendulum is %f\n", period());
    return 0;
}