#include <stdio.h>

void main() 
{
    int arr[] = {1, 2, 3, 4, 5}, i, n = 5;

    printf("even numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd Numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
}