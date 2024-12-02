#include <stdio.h>
int main() {
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    
    int i;
    int j;
    
    int arr[n][m];
    printf("Nhap cac phan tu mang 2 chieu:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Mang truoc khi sap xep:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int z;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m ; j++) {
            for (z = 0; z < m - 1 -j; z++) {
                if (arr[i][z] > arr[i][z + 1]) {
                    int temp = arr[i][z];
                    arr[i][z] = arr[i][z + 1];
                    arr[i][z + 1] = temp;
                }
            }
        }
    }
    printf("\n");
    printf("Mang sau khi sap xep:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

