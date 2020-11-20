#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main() {
	int x[3][3];
	int a,b,c,d;
	
	for(a=0;a<=2;a++){
		for (b=0;b<=2;b++){
			printf("Enter the values of array [%d] and [%d]", a, b);
			scanf("%d", &x[a][b]);
		}
	}
	
	for(c=0;c<=2;c++){
		for(d=0;d<=2;d++){
			printf("The values of [%d] and [%d] are = %d\n", c, d, x[c][d]);	
		}
			
		}
}
