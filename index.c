#include <stdio.h>


typedef struct 
{
    char name[5];
    int damage;
    
}BulletTypes;


void game(){
    BulletTypes buckshot = {"BUCKSHOT", 50};

    int distance;

    printf("How far away is the target? Enter distance in meters : "); 
    scanf("%i", &distance);

    int damagefalloff = buckshot.damage/distance;

    int finaldamage = buckshot.damage - damagefalloff;
    //I don't know what kind of fucked up math this is, but if it works, I swear to god I'm turning to christianity

    printf("Distance : %i\n", distance);
    printf("Damage : %i \n", finaldamage);
    printf("Damage Falloff: %i", damagefalloff);
}

int main(){

    game();

    return 0;
}