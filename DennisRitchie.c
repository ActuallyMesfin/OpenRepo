//refresher on pointers
//pointer at 3d array
#include <stdio.h>

int main(){
  int values[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
/*
  [0,0] [0,1] [0,2]
  [1,0] [1,1] [1,2]
  [2,0] [2,1] [2,2]
*/
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Address at Point[%d][%d] : %p \n", i, j, &values[i][j]);
    }
  }
  return 0;
}