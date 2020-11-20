#include<stdio.h>
#include<stdlib.h>

float pi() {
	float x = 3.142;
	printf("The value of pi is %f \n", x);
	return x;
}

main(){
	printf("2+pi = %f", 2+pi());
	
}
