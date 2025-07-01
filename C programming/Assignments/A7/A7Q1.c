#include <stdio.h>

void main() 
{
    int arr[] = {1, 2, 3, 4, 5}, min, max, i;
    int n = 5;
    min = max = arr[0];

    for(i = 1; i < n; i++)
	 {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    printf("min: %d\nmax: %d\n", min, max);
}