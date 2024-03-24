//refresher on pointers
#include <stdio.h>

int main(){
  int value, *pValue;
  pValue = &value;
  printf("%p\n", &value);
  printf("%p", pValue);
  return 0;
}