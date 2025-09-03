#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;  // find middle index

        if (arr[mid] == key) 
            return mid;   // key found

        else if (arr[mid] < key)
            low = mid + 1;  // search right half
        else
            high = mid - 1; // search left half
    }

    return -1; // not found
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d sorted elements (ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}
