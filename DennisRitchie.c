#include <stdio.h>
#include <string.h>
struct User {
  int age;
  char name[10];
};

int main() {
  struct User nigga = {16, "Alan"};
  printf("%s is age %d", nigga.name, nigga.age);
}