#include <stdio.h>

void changeArray(int *arr, int size, int index, int newValue);  

int main() {
    int arr[] = {2, 4, 6, 8, 11};  
    int size = sizeof(arr) / sizeof(int);  

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int newValue = 10;
    int index = 4;
    changeArray(arr, size, index, newValue);  

    printf("\nMang sau khi doi:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}


void changeArray(int *arr, int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        printf("Vi tri %d khong hop le.\n", index);  
        return;
    }
    arr[index] = newValue;  
}

