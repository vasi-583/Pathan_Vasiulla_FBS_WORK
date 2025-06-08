#include<stdio.h>
void main(){
	int num = 313;
	int a1, a2, a3, q1, rev;
	a1 = num % 10;
	q1 = num / 10; 
	a2 = q1 % 10;
	a3 = q1 / 10;
	rev = a1 * 100+a2 * 10+a3;
	
	if(num == rev){
		printf("%d is Pallindrome", num);
	}
	else{
		printf("%d is not a Pallindrome", rev);
	}
}