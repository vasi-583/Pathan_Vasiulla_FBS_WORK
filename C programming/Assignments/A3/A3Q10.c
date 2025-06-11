#include <stdio.h>
int main() 
{
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10; 

    while(num >= 10) {
        num = num / 10;
    }
    firstDigit = num;

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);

    return 0;
}
