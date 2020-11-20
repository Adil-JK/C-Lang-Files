#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){

int x;
int y;

printf("Enter the values of x and y: \n");
scanf("%d \n", &x);
scanf("%d", &y);

if (x<y){
	printf("x<y");
}

else if (x>y) {
printf("x>y");
}

else {
	printf("x=y");
}

}
