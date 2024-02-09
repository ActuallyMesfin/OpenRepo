//FUNCTIONS
/*return type(arguments){
    declarations;
    statements;    
}*/
void function1();
double function2();

main(){
    function1();
    int c = function2(2,2);
    printf("%d", c);
    return 0;
}



void function1(){
    printf("Hello World\n");
    return 0;
}

double function2(int number1, int number2){
    return (number1 * number2);
}