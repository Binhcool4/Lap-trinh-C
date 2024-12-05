#include <stdio.h>
void inMang(int array[], int n) {
    printf("Các phan tu trong mang la:\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};  
    int n = sizeof(array) / sizeof(array[0]); 

    inMang(array, n);

    return 0;
}

