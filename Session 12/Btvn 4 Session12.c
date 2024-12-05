#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 45, 7, 89, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}

