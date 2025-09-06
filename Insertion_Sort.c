#include <stdio.h>

int main() {
    int n, i, j, key;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Insertion Sort
    for(i = 1; i < n; i++) {
        key = arr[i];         // Take current element as key
        j = i - 1;
        
        // Move elements greater than key to one position ahead
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;     // Insert key at correct position
    }
    
    // Print sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
