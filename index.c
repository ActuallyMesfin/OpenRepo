#include <stdio.h>

typedef struct
{
    char name[24];
    char something;
    int age;
    double salary;
} User;

void main(){

    User user1 = {"Mesfin", '@', 19, 34000.50};
    printf("%s", user1.age);
    printf("%c", user1.something);
    printf("%i", user1.age);
    printf("%lf", user1.salary);
}