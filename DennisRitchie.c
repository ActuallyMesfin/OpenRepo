#include <stdio.h>

int main(){
  int a = 5;
  int *b, *c;
  b = &a;
  printf("%d\n", sizeof(b));
  printf("%d", sizeof(c));
}