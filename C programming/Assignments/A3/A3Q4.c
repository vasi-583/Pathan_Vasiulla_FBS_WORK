#include <stdio.h>

int main() 

{
	
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);


    if (n <= 1) {
        isPrime = 0;
        printf("Prime\n");
    } else {


        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
            isPrime = 0;
            break;
}
            printf("Not Prime\n");
        }
    }
    

    return 0;
}
