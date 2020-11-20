#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float add(void) {								// Definition of function
		float x;									// 1st case
		float y;
		float z;
		printf("Enter the two numbers\n");
		scanf("%d %d", &x, &y);
		z = x + y;
		printf("%d + %d = %d \n",x,y, z);
	}
	
void add_2(int a, int b) {						//2nd case
		int c;
		c = a + b;
		printf("%d + %d = %d \n",a,b, c);
}

float pi(void) {
	float pi;
	pi = 3.142;
	return pi;
}

float pi();	
main(){	
	float val;
	val = add() + pi();										// Calling function
	printf("%f", val);
	
	}
	
