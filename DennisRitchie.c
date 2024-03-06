#include <stdio.h>



struct loadout
{
  char weapon_name[10];
  char player_class[10];
};


int main(){
  struct loadout weapon1 = {"Scattergun", "Scout"};
  printf("%s", weapon1.player_class);
  return 0;
}