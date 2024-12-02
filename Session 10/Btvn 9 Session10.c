#include <stdio.h>
int main() {
    int n, m;
    int i;
    int j;
    
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    if (n != m) {
        printf("Phai la ma tran vuong\n");
        return 0;
    }
    int arr[n][m];
    printf("Nhap cac phan tu cho mang:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Mang truoc khi sap xep:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < n ; i++) {
        for ( j = 0; j < n - 1 -i; j++) {
            if (arr[j][j] > arr[j + 1][j + 1]) {
                int temp = arr[j][j];
                arr[j][j] = arr[j + 1][j + 1];
                arr[j + 1][j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

