#include <stdio.h>
#include <time.h>

int bs(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (high + low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int n = 10;
    int arr[10];
    int result, i;
    int key = 9;
    clock_t start, end;
    double cpu_time_used;

    for (i = 0; i < n; i++) {
        arr[i] = i;
    }

    start = clock();
    result = bs(arr, n, key);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
