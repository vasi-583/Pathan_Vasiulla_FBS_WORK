//Check the given number is Palindrome number or not. 
//Input: n = 121 
//Output: Palindrome 
#include <stdio.h>
int main() 
{
	
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if(original == reverse){
	
        printf("%d is  Palindrome Number.\n", original);
    }else{
	
        printf("%d  not Palindrome Number.\n", original);
    }
    return 0;
}
