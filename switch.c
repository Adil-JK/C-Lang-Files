main()
{
	int x;
	
	printf("Enter your age: ");
	scanf("%d", &x);
	
	switch(x) {
		case 18:
			printf("You are eligible");
			break;
		default:
			printf("You are not eligible");
	}
	
}
