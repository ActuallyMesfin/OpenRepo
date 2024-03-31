#include <stdio.h>

int main(){
  int a = 5;
  int* b = &a;
  a = 6;
  printf("%d", a);
  return 0;
}