#include <stdio.h>
#include <time.h>

int rls(int arr[], int size, int key, int index) {
    if (index >= size)
        return -1;
    if (arr[index] == key)
        return index;
    return rls(arr, size, key, index + 1);
}

int main() {
    int n = 10000;
    int arr[10000];
    int result, i;
    int key = 9999;
    clock_t start, end;
    double cpu_time_used;

    for (i = 0; i < n; i++) {
        arr[i] = i;
    }

    start = clock();
    result = rls(arr, n, key, 0);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
