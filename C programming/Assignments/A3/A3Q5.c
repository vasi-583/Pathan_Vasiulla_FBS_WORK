#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;
    
    while (num > 0) {
        digit = num % 10;   
        sum = sum + (digit * digit * digit);
        num = num / 10;         
    }

    if (sum == original){
	
        printf("%d Armstrong number.\n", original);
    }else{
	
        printf("%d not Armstrong number.\n", original);
}
}
