#include <stdio.h>

int isArrayPalindrome(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    
    while (left < right) {
        if (arr[left] != arr[right]) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("%d\n", isArrayPalindrome(arr1, size1)); 
    printf("%d\n", isArrayPalindrome(arr2, size2)); 
    
    return 0;
}