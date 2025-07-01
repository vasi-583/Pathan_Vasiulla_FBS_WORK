#include <stdio.h>

void main() 
{
    int arr[] = {1, 2, 3, 4, 5}, sum = 0, i, n = 5;

    for(i = 0; i < n; i++)
        sum += arr[i];

    printf("sum = %d\n", sum);
}