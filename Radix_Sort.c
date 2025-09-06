#include <stdio.h>

// Function to get the maximum value in arr[]
int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// A function to do counting sort based on a specific digit
void countingSort(int arr[], int n, int exp) {
    int output[n];  // output array
    int count[10] = {0}; // digit count (0-9)

    // Count occurrences of digits
    for(int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Convert count[] to cumulative sum
    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (stable sort)
    for(int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy output[] back to arr[]
    for(int i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main Radix Sort function
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);  // find max number

    // Do counting sort for each digit
    for(int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    int n;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call radix sort
    radixSort(arr, n);

    // Print sorted array
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
