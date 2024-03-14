#include <stdio.h>

int main(){
    int values[3][3] = {{1}, {2}, {3}};

    for(int i = 0; i <= sizeof(values); i++){
        printf("%p\n", &values);
    }
    return 0;
}