#include <stdio.h>
int main(){
	int var[10];
	var[0] = 1;
	var[1] = 2;
	int *pVar;
	pVar = &var[1];
	printf("%d", *pVar);
	return 0;
}