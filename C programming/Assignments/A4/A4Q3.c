#include <stdio.h>

void main() 
{
    int n;
    int i, j, sum; 
    
    printf("Enter the number n: ");
    scanf("%d", &n);
    
    printf("Perfect numbers from 1 to %d are:\n", n);
    
    for (i = 1; i <= n; i++) {
        sum = 0;
        
       for (j = 1; j < i; j++) {
            if (i % j == 0) { 
                sum = sum + j; 
            }
        }
        
        if (sum == i && i != 0) {
            printf("%d ", i);
        }
    }
    

}