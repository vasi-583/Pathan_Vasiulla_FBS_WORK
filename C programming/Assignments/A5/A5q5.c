void main()
{
	int rows=5 , i , j , space;
	
	for (i=rows;i >=1; i--) {
		
		for(space=1; space<=rows-i; space++) {
			printf(" ");
		}
		
		for(j=1; j<=i;j++){
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}