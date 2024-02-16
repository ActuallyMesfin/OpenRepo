#include <stdio.h>
#include <math.h>

double pythagoras(float opposite, float adjacent);

int main(){
	printf("%f\n", pythagoras(3,4));
	return 0;
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
