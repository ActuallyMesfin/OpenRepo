#include <stdio.h>

int main(){
  int value;
  int* pValue = &value;
  int *pValue2 = &value;
  printf("%p\n", pValue);
  printf("%p", pValue2);
  return 0;
}