#include <stdio.h>
#include <time.h>

int rbs(int arr[], int low, int high, int key) {
    if (high < low)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return rbs(arr, low, mid - 1, key);
    else
        return rbs(arr, mid + 1, high, key);
}

int main() {
    int n = 10000;
    int arr[n];   
    int i, result;
    int key = 9999;
    clock_t start, end;
    double cpu_time_used;

    for (i = 0; i < n; i++) {
        arr[i] = i;
    }

    start = clock();
    result = rbs(arr, 0, n - 1, key);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
