#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main() {
	int a,b,c,d;
	for(a=0;a<9;a++){
		for(b=0;b<=a;b++){
			printf("*");
		}
			printf("\n");
	}
	
			printf("\n");
	
	// Reverse star pattern		
	for(c=0;c<9;c++){
		for(d=0;d<=9-c-1;d++){
			printf("*");	
		}
			printf("\n");	
		}
}
