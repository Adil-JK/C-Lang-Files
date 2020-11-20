#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main() {
	float cal[10];
	printf("Enter the values to add:\n");
	scanf("%f", &cal[0]);
	scanf("%f", &cal[1]);
	cal[2] = cal[0] + cal[1];
	printf("The sum of %0.2f and %0.2f is %0.f \n", cal[0], cal[1], cal[2]);
	
	printf("Enter the values to subtract:\n");
	scanf("%f", &cal[3]);
	scanf("%f", &cal[4]);
	cal[5] = cal[3] - cal[4];
	printf("Difference of %0.2f and %0.2f is %0.2f \n", cal[3], cal[4], cal[5]);
	
	printf("Enter the values to multiply:\n");
	scanf("%f", &cal[6]);
	scanf("%f", &cal[7]);
	cal[8] = cal[6] * cal[7];
	printf("Multiplication of %0.2f and %0.2f is %0.2f \n", cal[6], cal[7], cal[8]);
	
	printf("Enter the values to divide:\n");
	scanf("%f", &cal[9]);
	scanf("%f", &cal[10]);
	cal[11] = cal[9] / cal[10];
	printf("Division of %0.2f and %0.2f is %0.2f \n", cal[9], cal[10], cal[11]);
	
}
