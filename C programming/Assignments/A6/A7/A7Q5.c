#include <stdio.h>

void main()
 {
    int arr[] = {1, 2, 3, 4, 5}, i, n = 5;

    printf("alternate ellements: ");
    
    for(i = 0; i < n; i += 2)
    printf("%d ", arr[i]);
}