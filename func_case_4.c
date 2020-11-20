#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float add(int x, float y) {								// Definition of function
		float z;
		printf("Enter the two numbers\n");
		scanf("%d %f", &x, &y);
		z = x + y;
		printf("%d + %f = %f \n",x,y, z);
	}


main(){
	add(2,3.5);
	
}
