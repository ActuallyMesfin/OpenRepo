//I have no idea what structs do, but I also kinda do
#include <stdio.h>

typedef struct {

    int damage;
    char type[2];
    char damagetype[4];

}BulletTypes;

BulletTypes incendiary = {50, "INC", "FIRE"};
BulletTypes buckshot = {40, "BCK", "FIRE"};
BulletTypes duckshot = {5, "DCK", "FIRE"};

int main(){

    int o = 0;
    char response;

    printf("Are you ready to play the game?");
    scanf(">>> %c", &response);

    if(response = 'Y'){
        printf("You said yes");
        o ++;
    }
    else if (response = 'N')
    {
        printf("You said no");
        o++;
    }

    else{
        printf("Please input a valid response");
    }
    

    return 0;
}
