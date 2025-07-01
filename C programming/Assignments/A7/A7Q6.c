#include <stdio.h>

void main()
 {
    int arr[] = {1, 2, 3, 4, 5, 6, 7}, i, n = 7;

    printf("prime Numbers: ");
    for(i = 0; i < n; i++)
        if(isPrime(arr[i]))
        
            printf("%d ", arr[i]);
}

int isPrime(int num)

 {
 	
    if(num < 2) return 0;
    for(int i = 2; i <= num/2; i++)
        if(num % i == 0)
            return 0;
    return 1;
}