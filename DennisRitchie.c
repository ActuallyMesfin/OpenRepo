#include <stdio.h>
//experimentation
int main(){
	int numbers[6] = {1, 2, 3, 5, 10, 20};
	for(int i = 0; i <=6; i++){
		printf("%p\n", &numbers[i]);
		//it looks like there's a pattern for the memory addresses. idk.
	}
	return 0;
}