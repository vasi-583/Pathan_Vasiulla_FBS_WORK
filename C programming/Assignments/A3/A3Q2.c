#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the value:\n ");
	scanf("%d",&n);
	
	for( i = 1 ; i<=10 ; i++ ) {
		printf("%d \n" ,i*n);
	}
} 