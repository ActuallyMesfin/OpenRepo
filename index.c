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
    printf("%s \n", user1.name);
    printf("%c \n", user1.something);
    printf("%i \n", user1.age);
    printf("%.2lf \n", user1.salary);
}