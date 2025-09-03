#include <stdio.h>

// Function for linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

int main() {
    int n, key;

    // Step 1: Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Ask user for key
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 4: Call function
    int result = linearSearch(arr, n, key);

    // Step 5: Output result
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}
