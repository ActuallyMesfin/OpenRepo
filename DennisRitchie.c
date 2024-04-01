#include <stdio.h>

int main(){
  int a;
  int *b = &a;
  int **c = &b;
  printf("%p\n"), a;
  printf("%p\n"), b;
  printf("%p\n"), c;
}