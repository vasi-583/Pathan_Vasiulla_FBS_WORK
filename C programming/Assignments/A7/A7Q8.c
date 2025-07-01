#include <stdio.h>

void main() 
{
    int a[] = {1, 2, 3}, b[] = {4, 5, 6};
    
    int c[6], i, j, n1 = 3, n2 = 3;
    
    

    for(i = 0; i < n1; i++)
        c[i] = a[i];
    for(j = 0; j < n2; j++)
        c[i + j] = b[j];
        
        

    printf("merged array: ");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
}