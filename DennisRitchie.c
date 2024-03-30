#include <stdio.h>

int main(){
  int value;
  int* pValue = &value;
  printf("%p", pValue);//needs a value I guess. Was cool to see though
  return 0;
}