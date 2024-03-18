#include <stdio.h>

int main(){
    char name[10];
    scanf("%c", &name);

    switch (name[0])
    {
        case 'M':
            printf("You are banned!");
        break;
        
        case 'm':
            printf("You are banned!");
        break;
        
        default:
            printf("Welcome");
    }
}