#include<stdio.h>
int main() {
    int arr[] = {1, 4, 7, 9, 4, 1, 4, 9};
    int n = sizeof(arr) / sizeof(int);
    int item;
    int index[n];
    int count = 0;
    int i;
    printf("Nhap so can tim: ");
    scanf("%d", &item);

    for ( i = 0; i < n; i++) {
        if (arr[i] == item) {
            index[count] = i;
            count++;
        }
    }

    if (count > 0) {
        printf(" %d duoc tim thay o vi tri: ", item);
        for ( i = 0; i < count; i++) {
            printf("%d ", index[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay phan tu %d trong mang", item);
    }

    return 0;
}

