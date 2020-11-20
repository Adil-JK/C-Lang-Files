#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct DUET {
	int x;
	float y;
	char z;
	
	int a;
	char s[100];
}

main() {
	struct DUET d1;
	d1.x = 25;
	d1.y = 8.0;
	d1.z = 'A';
	
	d1.a = 10;
	gets(d1.s);
	
	printf("%d \n", d1.x);
	printf("%f \n", d1.y);
	printf("%c \n", d1.z);
	printf("%d \n", d1.a);
	printf("%s \n", d1.s);
	
}
