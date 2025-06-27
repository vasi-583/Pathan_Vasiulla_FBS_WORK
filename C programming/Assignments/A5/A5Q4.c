//printing pyramid style pattern input =5
void main()
{
	int rows=5, i , j , space;
	 
	for (i=1; i<=rows; i++)
	{
		for (space=1; space<=rows-i; space++) {
			printf(" ");
		}
			for(j=1; j<=i; j++) {
				printf("* ");
				
			}
			
		
		printf("\n");
	}
	return 0;
}