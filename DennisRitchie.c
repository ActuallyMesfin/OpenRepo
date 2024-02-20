#include <stdio.h>
enum level{
  FIRST,
  SECOND,
  THIRD
};
main(){
  enum level variable = FIRST;
  printf("%d", variable);
  return 0;
}