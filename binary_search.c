#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main(int argc, char *argv[]) {
    int n = argc - 4;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = atoi(argv[i + 1]);
    int left = atoi(argv[n + 1]);
    int right = atoi(argv[n + 2]);
    int target = atoi(argv[n + 3]);
    int result = binarySearch(arr, left, right, target);
    if (result == -1)
        printf("-1\n");
    else
        printf("%d\n", result);
    free(arr);
    return 0;
}