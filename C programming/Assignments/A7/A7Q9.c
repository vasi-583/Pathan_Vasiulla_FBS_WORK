#include <stdio.h>

void main() 
{
    int arr[] =   {1, 2, 3, 4, 5}, i, n = 5;

    printf("Reversed array: ");
    
    for(i = n - 1; i >= 0; i--)
    
    printf("%d ", arr[i]);
}