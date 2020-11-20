#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){

int x,y;

printf("Enter the states of x and y \n");
scanf("%d", &x);
scanf("%d", &y);

if(x==1||y==1) {
	printf("State is on");
}

else if (x==0 && y==0) {
	printf("State is off");
}

else {
	printf("You are giving wrong state");
}

}
