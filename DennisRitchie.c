//refresher on pointers
#include <stdio.h>

int main(){
  int values[3] = {1, 2, 3};
  int *ptr = &values[0];
  printf("Value at Index [0] : %d\n", values[0]);
  printf("Value of Pointer : %d\n", *ptr);
  printf("Address of Value : %p\n", &values[0]);
}