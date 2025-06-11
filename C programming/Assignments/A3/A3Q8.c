#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;


    while(num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if(sum == original){
	
        printf("%d is Strong Number.\n", original);
    }else{
	
        printf("%d not Strong Number.\n", original);
         }
    return 0;
}


