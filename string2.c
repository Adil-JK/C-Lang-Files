#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
char S[100];
int input;
printf("Enter 0 to print your name and 1 to print your father's name: \n");
scanf("%d", &input);

if(input==0) {
	printf("Enter your name: ");
	scanf("%d", &S);
	gets(S);
	printf("Your name is %s", S);
}
else if (input==1) {
	printf("Enter your father's' name: ");
	scanf("%d", &S);
	gets(S);
	printf("Your father's name is %s", S);
}
else {
	printf("Please enter the correct number!");
}

}
