#include<stdio.h>
int main()
{
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	
	if(a%2!=0) {
		printf("value is even \n",a);	
	} else{
		printf("value is odd\n",a);
	}
	return 0;
}