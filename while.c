main(){
	int x;
	int y;
	int z;
	
	printf("Enter the number of table you want to print: ");
	scanf("%d", &y);
	
	printf("Enter the range of table: ");
	scanf("%d", &z);
	
	x = 1;
	while(x<=z){
		printf("%d * %d = %d \n", y, x, y * x);
		x++;
	}
	
}
