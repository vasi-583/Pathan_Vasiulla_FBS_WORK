#include <stdio.h>

void main()
 {
    int arr[] = {5, 3, 1, 4, 2}, n = 5, i, j, temp;

    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
            
		if(arr[i] > arr[j])
			 {
			 	
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
}
    

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}