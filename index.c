//there's a nation wide power problem rn. The lights are flickering. Let me get a quick function in rq
//I just realized after finishing this function that I didn't even need to include <stdio.h>? tf? 
double sum();

int main(){

    printf("%.1lf", sum(1, 2));

    return 0;
}

double sum(int number1, int number2){
    return number1 + number2;
}