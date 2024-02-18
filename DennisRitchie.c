#include <stdio.h>
//experimentation
int main(){
	int numbers[6] = {1, 2, 3, 5, 10, 20};
	for(int i = 0; i <=6; i++){
		printf("%p\n", &numbers[i]);
		//it looks like there's a pattern for the memory addresses. idk.
	}
	return 0;
<<<<<<< HEAD
}
=======
}
double pythagoras(float opposite, float adjacent){
	float hypotenuse = sqrt(pow(opposite, 2) + pow(adjacent, 2));
	return hypotenuse;
}
				/*

						 /| 	
						/ |
					       /  |
		  		Hypotenuse    /	  |		(Hypotenuse ^ 2) = (Opposite ^ 2) + (Adjacent ^ 2)
					     /	  | Opposite
					    /	  |
				   	   /	  | 
				          / 	  | 	
				         /	 _| 	
					/_______|_|	<--90 Deg

				Adjacent
There was absolutely no reason for me to draw this thing but it looks so good I don't regret it
				*/
AHHHHHHHHH
>>>>>>> a7091e93ef97a721591015135c1a895c063b86ed
