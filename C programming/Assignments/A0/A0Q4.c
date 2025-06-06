#include <stdio.h>

int main() 
{
    int a, b, temp;


    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("later swapping: a = %d, b = %d\n", a, b);

}
