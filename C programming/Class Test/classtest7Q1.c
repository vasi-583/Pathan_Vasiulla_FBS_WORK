#include <stdio.h>

void swapElements(int arr[], int x, int y, int size) {
    
    if (x >= 0 && x < size && y >= 0 && y < size) {
        
        int temp = arr[x];
       
        arr[x] = arr[y];
       
        arr[y] = temp;
        printf("Elements swapped successfully!\n");
    } else {
        printf("Invalid positions! Please enter positions within array size.\n");
    }
}

int main() {
    int size, x, y;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
   
    if (size <= 0) {
        printf("Size must be greater than 0!\n");
        return 1;
    }
    
    int arr[size]; 
    
   
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    
    printf("Enter the Xth position to swap (0-based index): ");
    scanf("%d", &x);
    printf("Enter the Yth position to swap (0-based index): ");
    scanf("%d", &y);
    
   
    swapElements(arr, x, y, size);
    
    
    printf("Array after swapping:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
