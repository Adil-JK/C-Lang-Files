# include<stdio.h>
# include<conio.h>

main(){
	int x;
	int y;
	int z;
	
	printf("Enter the number of table you want to print: ");
	scanf("%d", &x);
	
	printf("Enter the range of table: ");
	scanf("%d", &z);
	
	y = 1;
	do{
		printf("%d * %d = %d \n", x, y, x * y);
		y++;
	} while(y<=10); /* Here we have given false condition but still the do-while loop will run one time and then halt */
	
}
